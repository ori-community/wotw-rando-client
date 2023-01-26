#pragma once
#include <Modloader/app/structs/SocketType__Enum.h>
#include <Modloader/app/structs/SocketType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketType__Enum {
        inline app::SocketType__Enum__Class** type_info() {
            static app::SocketType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SocketType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SocketType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketType__Enum__Class>(type_info(), "System.Net.Sockets", "SocketType");
        }
        inline app::SocketType__Enum* create() {
            return il2cpp::create_object<app::SocketType__Enum>(get_class());
        }
    } // namespace SocketType__Enum
} // namespace app::classes::types
