#pragma once
#include <Modloader/app/structs/SocketAsyncOperation__Enum.h>
#include <Modloader/app/structs/SocketAsyncOperation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketAsyncOperation__Enum {
        inline app::SocketAsyncOperation__Enum__Class** type_info() {
            static app::SocketAsyncOperation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SocketAsyncOperation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SocketAsyncOperation__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketAsyncOperation__Enum__Class>(type_info(), "System.Net.Sockets", "SocketAsyncOperation");
        }
        inline app::SocketAsyncOperation__Enum* create() {
            return il2cpp::create_object<app::SocketAsyncOperation__Enum>(get_class());
        }
    } // namespace SocketAsyncOperation__Enum
} // namespace app::classes::types
