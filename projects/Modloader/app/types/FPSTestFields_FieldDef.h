#pragma once
#include <Modloader/app/structs/FPSTestFields_FieldDef.h>
#include <Modloader/app/structs/FPSTestFields_FieldDef__Array.h>
#include <Modloader/app/structs/FPSTestFields_FieldDef__Boxed.h>
#include <Modloader/app/structs/FPSTestFields_FieldDef__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSTestFields_FieldDef {
        inline app::FPSTestFields_FieldDef__Class** type_info() {
            static app::FPSTestFields_FieldDef__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSTestFields_FieldDef__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSTestFields_FieldDef__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSTestFields_FieldDef__Class>(type_info(), "", "FPSTestFields", "FieldDef");
        }
        inline app::FPSTestFields_FieldDef* create() {
            return il2cpp::create_object<app::FPSTestFields_FieldDef>(get_class());
        }
        inline app::FPSTestFields_FieldDef__Boxed* box(app::FPSTestFields_FieldDef value) {
            return il2cpp::box_value<app::FPSTestFields_FieldDef__Boxed>(get_class(), value);
        }
        inline app::FPSTestFields_FieldDef__Array* create_array(int size) {
            return il2cpp::array_new<app::FPSTestFields_FieldDef__Array>(get_class(), size);
        }
        inline app::FPSTestFields_FieldDef__Array* create_array(const std::vector<app::FPSTestFields_FieldDef>& items) {
            return il2cpp::array_new<app::FPSTestFields_FieldDef__Array>(get_class(), items);
        }
    } // namespace FPSTestFields_FieldDef
} // namespace app::classes::types
