#pragma once
#include <Modloader/app/structs/ConsoleConnection.h>
#include <Modloader/app/structs/ConsoleConnection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleConnection {
        inline app::ConsoleConnection__Class** type_info() {
            static app::ConsoleConnection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConsoleConnection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConsoleConnection__Class* get_class() {
            return il2cpp::get_class<app::ConsoleConnection__Class>(type_info(), "", "ConsoleConnection");
        }
        inline app::ConsoleConnection* create() {
            return il2cpp::create_object<app::ConsoleConnection>(get_class());
        }
    } // namespace ConsoleConnection
} // namespace app::classes::types
