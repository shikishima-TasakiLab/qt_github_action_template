#include "sample.h"
#include "./ui_sample.h"

Sample::Sample(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Sample)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Sample::pushButtonClicked);
}

Sample::~Sample()
{
    delete ui;
}

void Sample::pushButtonClicked()
{
    QMessageBox::information(this, "Message Box", "Hello world!");
}
