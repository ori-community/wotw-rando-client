#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FireStick {
        inline app::FireStick__Class** type_info = (app::FireStick__Class**)(modloader::win::memory::resolve_rva(0x0476AE50));
        inline app::FireStick__Class* get_class() {
            return il2cpp::get_class<app::FireStick__Class>(type_info, "", "FireStick");
        }
        inline app::FireStick* create() {
            return il2cpp::create_object<app::FireStick>(get_class());
        }
    } // namespace FireStick
} // namespace app::classes::types
