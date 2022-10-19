#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BipedNaming {
        inline app::BipedNaming__Class** type_info = (app::BipedNaming__Class**)(modloader::win::memory::resolve_rva(0x0474BC10));
        inline app::BipedNaming__Class* get_class() {
            return il2cpp::get_class<app::BipedNaming__Class>(type_info, "RootMotion", "BipedNaming");
        }
        inline app::BipedNaming* create() {
            return il2cpp::create_object<app::BipedNaming>(get_class());
        }
    } // namespace BipedNaming
} // namespace app::classes::types
