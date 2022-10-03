#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrailPerformanceTester {
        namespace {
            app::MoonTrailPerformanceTester__Class* type_info_ref = nullptr;
        }
        app::MoonTrailPerformanceTester__Class** type_info = &type_info_ref;
        inline app::MoonTrailPerformanceTester__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailPerformanceTester__Class>(type_info, "", "MoonTrailPerformanceTester");
        }
        inline app::MoonTrailPerformanceTester* create() {
            return il2cpp::create_object<app::MoonTrailPerformanceTester>(get_class());
        }
    } // namespace MoonTrailPerformanceTester
} // namespace app::classes::types
