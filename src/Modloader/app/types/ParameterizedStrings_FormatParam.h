#pragma once
#include <Modloader/app/structs/ParameterizedStrings_FormatParam.h>
#include <Modloader/app/structs/ParameterizedStrings_FormatParam__Array.h>
#include <Modloader/app/structs/ParameterizedStrings_FormatParam__Boxed.h>
#include <Modloader/app/structs/ParameterizedStrings_FormatParam__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterizedStrings_FormatParam {
        inline app::ParameterizedStrings_FormatParam__Class** type_info() {
            static app::ParameterizedStrings_FormatParam__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParameterizedStrings_FormatParam__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParameterizedStrings_FormatParam__Class* get_class() {
            return il2cpp::get_nested_class<app::ParameterizedStrings_FormatParam__Class>(type_info(), "System", "ParameterizedStrings", "FormatParam");
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
