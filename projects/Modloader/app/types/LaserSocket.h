#pragma once
#include <Modloader/app/structs/LaserSocket.h>
#include <Modloader/app/structs/LaserSocket__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserSocket {
        inline app::LaserSocket__Class** type_info() {
            static app::LaserSocket__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserSocket__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserSocket__Class* get_class() {
            return il2cpp::get_class<app::LaserSocket__Class>(type_info(), "", "LaserSocket");
        }
        inline app::LaserSocket* create() {
            return il2cpp::create_object<app::LaserSocket>(get_class());
        }
    } // namespace LaserSocket
} // namespace app::classes::types
