#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetupHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BreakablePhysicalSetupHolder__Class** type_info;
        inline app::BreakablePhysicalSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetupHolder__Class>(type_info, "", "BreakablePhysicalSetupHolder");
        }
        inline app::BreakablePhysicalSetupHolder* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetupHolder>(get_class());
        }
    } // namespace BreakablePhysicalSetupHolder
} // namespace app::classes::types
