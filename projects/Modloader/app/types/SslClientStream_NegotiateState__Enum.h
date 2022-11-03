#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SslClientStream_NegotiateState__Enum {
        namespace {
            inline app::SslClientStream_NegotiateState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SslClientStream_NegotiateState__Enum__Class** type_info = &type_info_ref;
        inline app::SslClientStream_NegotiateState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SslClientStream_NegotiateState__Enum__Class>(type_info, "Mono.Security.Protocol.Tls", "SslClientStream", "NegotiateState");
        }
        inline app::SslClientStream_NegotiateState__Enum* create() {
            return il2cpp::create_object<app::SslClientStream_NegotiateState__Enum>(get_class());
        }
    } // namespace SslClientStream_NegotiateState__Enum
} // namespace app::classes::types
