#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParameterizedStrings_FormatParam {
        namespace {
            inline app::ParameterizedStrings_FormatParam__Class* type_info_ref = nullptr;
        }
        inline app::ParameterizedStrings_FormatParam__Class** type_info = &type_info_ref;
        inline app::ParameterizedStrings_FormatParam__Class* get_class() {
            return il2cpp::get_nested_class<app::ParameterizedStrings_FormatParam__Class>(type_info, "System", "ParameterizedStrings", "FormatParam");
        }
        inline app::ParameterizedStrings_FormatParam* create() {
            return il2cpp::create_object<app::ParameterizedStrings_FormatParam>(get_class());
        }
        inline app::ParameterizedStrings_FormatParam__Boxed* box(app::ParameterizedStrings_FormatParam value) {
            return il2cpp::box_value<app::ParameterizedStrings_FormatParam__Boxed>(get_class(), value);
        }
        inline app::ParameterizedStrings_FormatParam__Array* create_array(int size) {
            return il2cpp::array_new<app::ParameterizedStrings_FormatParam__Array>(get_class(), size);
        }
        inline app::ParameterizedStrings_FormatParam__Array* create_array(const std::vector<app::ParameterizedStrings_FormatParam>& items) {
            return il2cpp::array_new<app::ParameterizedStrings_FormatParam__Array>(get_class(), items);
        }
    } // namespace ParameterizedStrings_FormatParam
} // namespace app::classes::types
