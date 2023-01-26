#pragma once
#include <Modloader/app/structs/FireStick_DropAndDestroy_d_73.h>
#include <Modloader/app/structs/FireStick_DropAndDestroy_d_73__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FireStick_DropAndDestroy_d_73 {
        inline app::FireStick_DropAndDestroy_d_73__Class** type_info() {
            static app::FireStick_DropAndDestroy_d_73__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FireStick_DropAndDestroy_d_73__Class**)(modloader::win::memory::resolve_rva(0x0470F2F8));
            }
            return cache;
        }
        inline app::FireStick_DropAndDestroy_d_73__Class* get_class() {
            return il2cpp::get_nested_class<app::FireStick_DropAndDestroy_d_73__Class>(type_info(), "", "FireStick", "<DropAndDestroy>d__73");
        }
        inline app::FireStick_DropAndDestroy_d_73* create() {
            return il2cpp::create_object<app::FireStick_DropAndDestroy_d_73>(get_class());
        }
    } // namespace FireStick_DropAndDestroy_d_73
} // namespace app::classes::types
