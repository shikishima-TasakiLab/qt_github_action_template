#ifndef SAMPLE_H
#define SAMPLE_H

#include <QWidget>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class Sample;
}
QT_END_NAMESPACE

class Sample : public QWidget
{
    Q_OBJECT

public:
    Sample(QWidget *parent = nullptr);
    ~Sample();

protected Q_SLOTS:
    void pushButtonClicked();

private:
    Ui::Sample *ui;
};
#endif // SAMPLE_H
