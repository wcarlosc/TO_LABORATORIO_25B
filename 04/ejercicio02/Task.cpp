#include "Task.h"
#include "ui_Task.h"

Task::Task(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Task)
{
    ui->setupUi(this);
    connect(ui->checkbox, &QCheckBox::toggled, this, &Task::onCheckBoxToggled);
}

Task::~Task()
{
    delete ui;
}

void Task::setTaskText(const QString &text)
{
    ui->Mitext->setPlainText(text);
}

QString Task::getTaskText() const
{
    return ui->Mitext->toPlainText();
}

void Task::onCheckBoxToggled(bool checked)
{
    if (checked) {
        emit taskCompleted(ui->Mitext->toPlainText());
    }
}
