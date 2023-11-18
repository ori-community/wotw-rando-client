#pragma once
#include <Modloader/app/structs/FireStick.h>
#include <Modloader/app/structs/FireStick__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FireStick {
        inline app::FireStick__Class** type_info() {
            static app::FireStick__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FireStick__Class**)(modloader::win::memory::resolve_rva(0x0476AE50));
            }
            return cache;
        }
        inline app::FireStick__Class* get_class() {
            return il2cpp::get_class<app::FireStick__Class>(type_info(), "", "FireStick");
        }
        inline app::FireStick* create() {
            return il2cpp::create_object<app::FireStick>(get_class());
        }
    } // namespace FireStick
} // namespace app::classes::types
