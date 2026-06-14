#pragma once
#include <Modloader/app/structs/SocketShutdown__Enum.h>
#include <Modloader/app/structs/SocketShutdown__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketShutdown__Enum {
        inline app::SocketShutdown__Enum__Class** type_info() {
            static app::SocketShutdown__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SocketShutdown__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SocketShutdown__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketShutdown__Enum__Class>(type_info(), "System.Net.Sockets", "SocketShutdown");
        }
        inline app::SocketShutdown__Enum* create() {
            return il2cpp::create_object<app::SocketShutdown__Enum>(get_class());
        }
    } // namespace SocketShutdown__Enum
} // namespace app::classes::types
