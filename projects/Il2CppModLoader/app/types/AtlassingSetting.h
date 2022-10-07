#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AtlassingSetting {
        namespace {
            app::AtlassingSetting__Class* type_info_ref = nullptr;
        }
        app::AtlassingSetting__Class** type_info = &type_info_ref;
        inline app::AtlassingSetting__Class* get_class() {
            return il2cpp::get_class<app::AtlassingSetting__Class>(type_info, "", "AtlassingSetting");
        }
        inline app::AtlassingSetting* create() {
            return il2cpp::create_object<app::AtlassingSetting>(get_class());
        }
        inline app::AtlassingSetting__Boxed* box(app::AtlassingSetting value) {
            return il2cpp::box_value<app::AtlassingSetting__Boxed>(get_class(), value);
        }
        inline app::AtlassingSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::AtlassingSetting__Array>(get_class(), size);
        }
        inline app::AtlassingSetting__Array* create_array(const std::vector<app::AtlassingSetting>& items) {
            return il2cpp::array_new<app::AtlassingSetting__Array>(get_class(), items);
        }
    } // namespace AtlassingSetting
} // namespace app::classes::types
