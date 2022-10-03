#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LZData {
        namespace {
            app::LZData__Class* type_info_ref = nullptr;
        }
        app::LZData__Class** type_info = &type_info_ref;
        inline app::LZData__Class* get_class() {
            return il2cpp::get_class<app::LZData__Class>(type_info, "Moon.Wwise", "LZData");
        }
        inline app::LZData* create() {
            return il2cpp::create_object<app::LZData>(get_class());
        }
        inline app::LZData__Boxed* box(app::LZData value) {
            return il2cpp::box_value<app::LZData__Boxed>(get_class(), value);
        }
    } // namespace LZData
} // namespace app::classes::types
