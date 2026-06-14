#pragma once
#include <Modloader/app/structs/RegexCharClass_SingleRange__Array.h>
#include <Modloader/app/structs/RegexCharClass_SingleRange__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexCharClass_SingleRange__Array {
        inline app::RegexCharClass_SingleRange__Array__Class** type_info() {
            static app::RegexCharClass_SingleRange__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RegexCharClass_SingleRange__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RegexCharClass_SingleRange__Array__Class* get_class() {
            return il2cpp::get_class<app::RegexCharClass_SingleRange__Array__Class>(type_info(), "System.Text.RegularExpressions", "RegexCharClass+SingleRange[]");
        }
        inline app::RegexCharClass_SingleRange__Array* create() {
            return il2cpp::create_object<app::RegexCharClass_SingleRange__Array>(get_class());
        }
    } // namespace RegexCharClass_SingleRange__Array
} // namespace app::classes::types
