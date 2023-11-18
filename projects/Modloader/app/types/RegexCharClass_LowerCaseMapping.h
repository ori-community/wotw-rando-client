#pragma once
#include <Modloader/app/structs/RegexCharClass_LowerCaseMapping.h>
#include <Modloader/app/structs/RegexCharClass_LowerCaseMapping__Array.h>
#include <Modloader/app/structs/RegexCharClass_LowerCaseMapping__Boxed.h>
#include <Modloader/app/structs/RegexCharClass_LowerCaseMapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexCharClass_LowerCaseMapping {
        inline app::RegexCharClass_LowerCaseMapping__Class** type_info() {
            static app::RegexCharClass_LowerCaseMapping__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RegexCharClass_LowerCaseMapping__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RegexCharClass_LowerCaseMapping__Class* get_class() {
            return il2cpp::get_nested_class<app::RegexCharClass_LowerCaseMapping__Class>(type_info(), "System.Text.RegularExpressions", "RegexCharClass", "LowerCaseMapping");
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
