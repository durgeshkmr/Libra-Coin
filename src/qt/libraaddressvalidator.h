// Copyright (c) 2011-2014 The Libra Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LIBRA_QT_LIBRAADDRESSVALIDATOR_H
#define LIBRA_QT_LIBRAADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class LibraAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LibraAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Libra address widget validator, checks for a valid libra address.
 */
class LibraAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LibraAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // LIBRA_QT_LIBRAADDRESSVALIDATOR_H
