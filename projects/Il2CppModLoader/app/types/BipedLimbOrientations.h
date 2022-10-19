#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BipedLimbOrientations {
        inline app::BipedLimbOrientations__Class** type_info = (app::BipedLimbOrientations__Class**)(modloader::win::memory::resolve_rva(0x0478A788));
        inline app::BipedLimbOrientations__Class* get_class() {
            return il2cpp::get_class<app::BipedLimbOrientations__Class>(type_info, "RootMotion", "BipedLimbOrientations");
        }
        inline app::BipedLimbOrientations* create() {
            return il2cpp::create_object<app::BipedLimbOrientations>(get_class());
        }
    } // namespace BipedLimbOrientations
} // namespace app::classes::types
