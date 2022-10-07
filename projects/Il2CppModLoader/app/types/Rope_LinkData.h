#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rope_LinkData {
        namespace {
            app::Rope_LinkData__Class* type_info_ref = nullptr;
        }
        app::Rope_LinkData__Class** type_info = &type_info_ref;
        inline app::Rope_LinkData__Class* get_class() {
            return il2cpp::get_nested_class<app::Rope_LinkData__Class>(type_info, "", "Rope", "LinkData");
        }
        inline app::Rope_LinkData* create() {
            return il2cpp::create_object<app::Rope_LinkData>(get_class());
        }
        inline app::Rope_LinkData__Boxed* box(app::Rope_LinkData value) {
            return il2cpp::box_value<app::Rope_LinkData__Boxed>(get_class(), value);
        }
        inline app::Rope_LinkData__Array* create_array(int size) {
            return il2cpp::array_new<app::Rope_LinkData__Array>(get_class(), size);
        }
        inline app::Rope_LinkData__Array* create_array(const std::vector<app::Rope_LinkData>& items) {
            return il2cpp::array_new<app::Rope_LinkData__Array>(get_class(), items);
        }
    } // namespace Rope_LinkData
} // namespace app::classes::types
