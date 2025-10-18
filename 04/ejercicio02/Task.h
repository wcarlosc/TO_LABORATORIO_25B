#ifndef TASK_H
#define TASK_H
#include <QWidget>

namespace Ui {
class Task;
}

class Task : public QWidget
{
    Q_OBJECT
public:
    explicit Task(QWidget *parent = nullptr);
    ~Task();

    void setTaskText(const QString &text);
    QString getTaskText() const;

signals:
    void taskCompleted(const QString &taskName);

private slots:
    void onCheckBoxToggled(bool checked);

private:
    Ui::Task *ui;
};
#endif // TASK_H
