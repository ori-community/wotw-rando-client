#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexCharClass_LowerCaseMapping {
        namespace {
            app::RegexCharClass_LowerCaseMapping__Class* type_info_ref = nullptr;
        }
        app::RegexCharClass_LowerCaseMapping__Class** type_info = &type_info_ref;
        inline app::RegexCharClass_LowerCaseMapping__Class* get_class() {
            return il2cpp::get_nested_class<app::RegexCharClass_LowerCaseMapping__Class>(type_info, "System.Text.RegularExpressions", "RegexCharClass", "LowerCaseMapping");
        }
        inline app::RegexCharClass_LowerCaseMapping* create() {
            return il2cpp::create_object<app::RegexCharClass_LowerCaseMapping>(get_class());
        }
        inline app::RegexCharClass_LowerCaseMapping__Boxed* box(app::RegexCharClass_LowerCaseMapping value) {
            return il2cpp::box_value<app::RegexCharClass_LowerCaseMapping__Boxed>(get_class(), value);
        }
        inline app::RegexCharClass_LowerCaseMapping__Array* create_array(int size) {
            return il2cpp::array_new<app::RegexCharClass_LowerCaseMapping__Array>(get_class(), size);
        }
        inline app::RegexCharClass_LowerCaseMapping__Array* create_array(const std::vector<app::RegexCharClass_LowerCaseMapping>& items) {
            return il2cpp::array_new<app::RegexCharClass_LowerCaseMapping__Array>(get_class(), items);
        }
    } // namespace RegexCharClass_LowerCaseMapping
} // namespace app::classes::types
