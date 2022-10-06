#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateFovModifier {
        namespace {
            app::StateFovModifier__Class* type_info_ref = nullptr;
        }
        app::StateFovModifier__Class** type_info = &type_info_ref;
        inline app::StateFovModifier__Class* get_class() {
            return il2cpp::get_class<app::StateFovModifier__Class>(type_info, "", "StateFovModifier");
        }
        inline app::StateFovModifier* create() {
            return il2cpp::create_object<app::StateFovModifier>(get_class());
        }
        inline app::StateFovModifier__Boxed* box(app::StateFovModifier value) {
            return il2cpp::box_value<app::StateFovModifier__Boxed>(get_class(), value);
        }
        inline app::StateFovModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::StateFovModifier__Array>(get_class(), size);
        }
        inline app::StateFovModifier__Array* create_array(const std::vector<app::StateFovModifier__Boxed>& items) {
            return il2cpp::array_new<app::StateFovModifier__Array>(get_class(), items);
        }
    } // namespace StateFovModifier
} // namespace app::classes::types
