/****************************************************************
 **                                                            **
 **  Copyright(C) 2015 Quanergy Systems. All Rights Reserved.  **
 **  Contact: http://www.quanergy.com                          **
 **                                                            **
 ****************************************************************/

/** \file exceptions.h
  * \brief Define specific sensor client run-time exceptions.
  *
  */

#ifndef QUANERGY_CLIENT_EXCEPTIONS_H
#define QUANERGY_CLIENT_EXCEPTIONS_H

#include <stdexcept>

namespace quanergy
{
  namespace client
  {

    struct SocketBindError : public std::runtime_error
    {
      explicit SocketBindError(const std::string& message)
        : std::runtime_error(message) {}
    };

    struct SocketReadError : public std::runtime_error
    {
      explicit SocketReadError(const std::string& message)
        : std::runtime_error(message) {}
    };

    struct InvalidHeaderError : public std::exception
    {
      virtual const char* what() const throw() { return "Invalid header"; }
    };

    struct SizeMismatchError : public std::exception
    {
      virtual const char* what() const throw() { return "Packet sizes don't match"; }
    };

    struct InvalidDataTypeError : public std::exception
    {
      virtual const char* what() const throw() { return "Invalid data type"; }
    };

    struct FirmwareVersionMismatchError : public std::exception
    {
      virtual const char* what() const throw() { return "Firmware version mismatch"; }
    };

  } // namespace client

} // namespace quanergy

#endif
