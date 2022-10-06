#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterModifier {
        namespace {
            app::ParameterModifier__Class* type_info_ref = nullptr;
        }
        app::ParameterModifier__Class** type_info = &type_info_ref;
        inline app::ParameterModifier__Class* get_class() {
            return il2cpp::get_class<app::ParameterModifier__Class>(type_info, "System.Reflection", "ParameterModifier");
        }
        inline app::ParameterModifier* create() {
            return il2cpp::create_object<app::ParameterModifier>(get_class());
        }
        inline app::ParameterModifier__Boxed* box(app::ParameterModifier value) {
            return il2cpp::box_value<app::ParameterModifier__Boxed>(get_class(), value);
        }
        inline app::ParameterModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::ParameterModifier__Array>(get_class(), size);
        }
        inline app::ParameterModifier__Array* create_array(const std::vector<app::ParameterModifier__Boxed>& items) {
            return il2cpp::array_new<app::ParameterModifier__Array>(get_class(), items);
        }
    } // namespace ParameterModifier
} // namespace app::classes::types
