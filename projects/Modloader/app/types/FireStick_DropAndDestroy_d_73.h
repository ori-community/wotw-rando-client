#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FireStick_DropAndDestroy_d_73 {
        inline app::FireStick_DropAndDestroy_d_73__Class** type_info = (app::FireStick_DropAndDestroy_d_73__Class**)(modloader::win::memory::resolve_rva(0x0470F2F8));
        inline app::FireStick_DropAndDestroy_d_73__Class* get_class() {
            return il2cpp::get_nested_class<app::FireStick_DropAndDestroy_d_73__Class>(type_info, "", "FireStick", "<DropAndDestroy>d__73");
        }
        inline app::FireStick_DropAndDestroy_d_73* create() {
            return il2cpp::create_object<app::FireStick_DropAndDestroy_d_73>(get_class());
        }
    } // namespace FireStick_DropAndDestroy_d_73
} // namespace app::classes::types
