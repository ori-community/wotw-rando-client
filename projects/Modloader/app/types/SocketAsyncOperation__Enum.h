#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SocketAsyncOperation__Enum {
        namespace {
            inline app::SocketAsyncOperation__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SocketAsyncOperation__Enum__Class** type_info = &type_info_ref;
        inline app::SocketAsyncOperation__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketAsyncOperation__Enum__Class>(type_info, "System.Net.Sockets", "SocketAsyncOperation");
        }
        inline app::SocketAsyncOperation__Enum* create() {
            return il2cpp::create_object<app::SocketAsyncOperation__Enum>(get_class());
        }
    } // namespace SocketAsyncOperation__Enum
} // namespace app::classes::types
