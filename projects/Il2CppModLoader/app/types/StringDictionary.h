#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringDictionary {
        namespace {
            app::StringDictionary__Class* type_info_ref = nullptr;
        }
        app::StringDictionary__Class** type_info = &type_info_ref;
        inline app::StringDictionary__Class* get_class() {
            return il2cpp::get_class<app::StringDictionary__Class>(type_info, "System.Collections.Specialized", "StringDictionary");
        }
        inline app::StringDictionary* create() {
            return il2cpp::create_object<app::StringDictionary>(get_class());
        }
    } // namespace StringDictionary
} // namespace app::classes::types
