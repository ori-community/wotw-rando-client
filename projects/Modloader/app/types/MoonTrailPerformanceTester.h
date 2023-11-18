#pragma once
#include <Modloader/app/structs/MoonTrailPerformanceTester.h>
#include <Modloader/app/structs/MoonTrailPerformanceTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrailPerformanceTester {
        inline app::MoonTrailPerformanceTester__Class** type_info() {
            static app::MoonTrailPerformanceTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrailPerformanceTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrailPerformanceTester__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailPerformanceTester__Class>(type_info(), "", "MoonTrailPerformanceTester");
        }
        inline app::MoonTrailPerformanceTester* create() {
            return il2cpp::create_object<app::MoonTrailPerformanceTester>(get_class());
        }
    } // namespace MoonTrailPerformanceTester
} // namespace app::classes::types
