#if not defined BEASTHTTP_COMMON_IMPL_CONNECTION_HXX
#define BEASTHTTP_COMMON_IMPL_CONNECTION_HXX

namespace _0xdead4ead {
namespace http {
namespace common {

template<class Socket,
         class CompletionExecutor>
connection<BEASTHTTP_SOCKET_TMPL_ATTRIBUTES, CompletionExecutor>::connection(
        socket_type&& socket,
        const CompletionExecutor& completion_executor)
    : base_socket{std::move(socket)},
      base_connection{completion_executor}

{
}

template<class Socket,
         class CompletionExecutor>
boost::beast::error_code
connection<BEASTHTTP_SOCKET_TMPL_ATTRIBUTES, CompletionExecutor>::shutdown(shutdown_type type)
{
    return base_socket::shutdown(type);
}

template<class Socket,
         class CompletionExecutor>
boost::beast::error_code
connection<BEASTHTTP_SOCKET_TMPL_ATTRIBUTES, CompletionExecutor>::close()
{
    return base_socket::close();
}

template<class Socket,
         class CompletionExecutor>
typename connection<BEASTHTTP_SOCKET_TMPL_ATTRIBUTES, CompletionExecutor>::socket_type&
connection<BEASTHTTP_SOCKET_TMPL_ATTRIBUTES, CompletionExecutor>::stream()
{
    return base_socket::instance_;
}

} // namespace common
} // namespace http
} // namespace _0xdead4ead

#endif // not defined BEASTHTTP_COMMON_IMPL_CONNECTION_HXX
