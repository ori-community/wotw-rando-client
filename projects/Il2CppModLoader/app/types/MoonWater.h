#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonWater {
        namespace {
            app::MoonWater__Class* type_info_ref = nullptr;
        }
        app::MoonWater__Class** type_info = &type_info_ref;
        inline app::MoonWater__Class* get_class() {
            return il2cpp::get_class<app::MoonWater__Class>(type_info, "", "MoonWater");
        }
        inline app::MoonWater* create() {
            return il2cpp::create_object<app::MoonWater>(get_class());
        }
    } // namespace MoonWater
} // namespace app::classes::types
