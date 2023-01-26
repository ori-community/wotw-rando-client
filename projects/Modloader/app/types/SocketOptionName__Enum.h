#pragma once
#include <Modloader/app/structs/SocketOptionName__Enum.h>
#include <Modloader/app/structs/SocketOptionName__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketOptionName__Enum {
        inline app::SocketOptionName__Enum__Class** type_info() {
            static app::SocketOptionName__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SocketOptionName__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SocketOptionName__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketOptionName__Enum__Class>(type_info(), "System.Net.Sockets", "SocketOptionName");
        }
        inline app::SocketOptionName__Enum* create() {
            return il2cpp::create_object<app::SocketOptionName__Enum>(get_class());
        }
    } // namespace SocketOptionName__Enum
} // namespace app::classes::types
