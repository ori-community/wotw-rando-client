#pragma once
#include <Modloader/app/structs/MoonTrailStressTester.h>
#include <Modloader/app/structs/MoonTrailStressTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrailStressTester {
        inline app::MoonTrailStressTester__Class** type_info() {
            static app::MoonTrailStressTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrailStressTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrailStressTester__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailStressTester__Class>(type_info(), "", "MoonTrailStressTester");
        }
        inline app::MoonTrailStressTester* create() {
            return il2cpp::create_object<app::MoonTrailStressTester>(get_class());
        }
    } // namespace MoonTrailStressTester
} // namespace app::classes::types
