#pragma once
#include <Modloader/app/structs/MoonCurveTester.h>
#include <Modloader/app/structs/MoonCurveTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonCurveTester {
        inline app::MoonCurveTester__Class** type_info() {
            static app::MoonCurveTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonCurveTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonCurveTester__Class* get_class() {
            return il2cpp::get_class<app::MoonCurveTester__Class>(type_info(), "", "MoonCurveTester");
        }
        inline app::MoonCurveTester* create() {
            return il2cpp::create_object<app::MoonCurveTester>(get_class());
        }
    } // namespace MoonCurveTester
} // namespace app::classes::types
