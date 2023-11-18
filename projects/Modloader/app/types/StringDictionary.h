#pragma once
#include <Modloader/app/structs/StringDictionary.h>
#include <Modloader/app/structs/StringDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringDictionary {
        inline app::StringDictionary__Class** type_info() {
            static app::StringDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringDictionary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringDictionary__Class* get_class() {
            return il2cpp::get_class<app::StringDictionary__Class>(type_info(), "System.Collections.Specialized", "StringDictionary");
        }
        inline app::StringDictionary* create() {
            return il2cpp::create_object<app::StringDictionary>(get_class());
        }
    } // namespace StringDictionary
} // namespace app::classes::types
