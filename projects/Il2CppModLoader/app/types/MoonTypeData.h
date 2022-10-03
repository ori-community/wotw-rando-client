#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTypeData {
        namespace {
            app::MoonTypeData__Class* type_info_ref = nullptr;
        }
        app::MoonTypeData__Class** type_info = &type_info_ref;
        inline app::MoonTypeData__Class* get_class() {
            return il2cpp::get_class<app::MoonTypeData__Class>(type_info, "Moon", "MoonTypeData");
        }
        inline app::MoonTypeData* create() {
            return il2cpp::create_object<app::MoonTypeData>(get_class());
        }
        inline app::MoonTypeData__Boxed* box(app::MoonTypeData value) {
            return il2cpp::box_value<app::MoonTypeData__Boxed>(get_class(), value);
        }
    } // namespace MoonTypeData
} // namespace app::classes::types
