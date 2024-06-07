//
// Copyright (c) 2023 Vinnie Falco (vinnie.falco@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/cppalliance/ws_io
//

#ifndef BOOST_WS_IO_ERROR_HPP
#define BOOST_WS_IO_ERROR_HPP

#include <boost/ws_io/detail/config.hpp>
#include <stdexcept>

namespace boost {
namespace ws_io {

/** Error codes returned the library
*/
enum class error
{
    // VFALCO 3 space indent or
    // else Doxygen malfunctions

    /**
     * The operation completed successfully.
    */
    success = 0,
};

} // ws_io
} // boost

#include <boost/ws_io/impl/error.hpp>

#endif
