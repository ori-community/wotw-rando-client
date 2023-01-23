#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SocketOptionLevel__Enum__Class.h>
#include <Modloader/app/structs/SocketOptionLevel__Enum.h>

namespace app::classes::types {
    namespace SocketOptionLevel__Enum {
        namespace {
            inline app::SocketOptionLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SocketOptionLevel__Enum__Class** type_info = &type_info_ref;
        inline app::SocketOptionLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketOptionLevel__Enum__Class>(type_info, "System.Net.Sockets", "SocketOptionLevel");
        }
        inline app::SocketOptionLevel__Enum* create() {
            return il2cpp::create_object<app::SocketOptionLevel__Enum>(get_class());
        }
    } // namespace SocketOptionLevel__Enum
} // namespace app::classes::types
