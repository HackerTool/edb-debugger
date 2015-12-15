
#include "ClickableLabel.h"

ClickableLabel::ClickableLabel(QWidget *parent, Qt::WindowFlags f) : QLabel(parent, f) {
}

ClickableLabel::ClickableLabel(const QString &text, QWidget *parent, Qt::WindowFlags f)  : QLabel(text, parent, f) {
}
 
ClickableLabel::~ClickableLabel() {
}
 
void ClickableLabel::mousePressEvent(QMouseEvent* event) {
    Q_UNUSED(event);
	Q_EMIT clicked();
}

void ClickableLabel::mouseDoubleClickEvent(QMouseEvent *event) {
	Q_UNUSED(event);
	Q_EMIT doubleClicked();
}
