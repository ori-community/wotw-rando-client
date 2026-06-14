#pragma once
#include <Modloader/app/structs/SslClientStream_NegotiateState__Enum.h>
#include <Modloader/app/structs/SslClientStream_NegotiateState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslClientStream_NegotiateState__Enum {
        inline app::SslClientStream_NegotiateState__Enum__Class** type_info() {
            static app::SslClientStream_NegotiateState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SslClientStream_NegotiateState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SslClientStream_NegotiateState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SslClientStream_NegotiateState__Enum__Class>(type_info(), "Mono.Security.Protocol.Tls", "SslClientStream", "NegotiateState");
        }
        inline app::SslClientStream_NegotiateState__Enum* create() {
            return il2cpp::create_object<app::SslClientStream_NegotiateState__Enum>(get_class());
        }
    } // namespace SslClientStream_NegotiateState__Enum
} // namespace app::classes::types
