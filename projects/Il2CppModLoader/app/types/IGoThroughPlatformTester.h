#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGoThroughPlatformTester {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGoThroughPlatformTester__Class** type_info;
        inline app::IGoThroughPlatformTester__Class* get_class() {
            return il2cpp::get_class<app::IGoThroughPlatformTester__Class>(type_info, "", "IGoThroughPlatformTester");
        }
        inline app::IGoThroughPlatformTester* create() {
            return il2cpp::create_object<app::IGoThroughPlatformTester>(get_class());
        }
    } // namespace IGoThroughPlatformTester
} // namespace app::classes::types
