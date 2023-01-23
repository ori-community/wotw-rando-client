#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StringDictionary__Class.h>
#include <Modloader/app/structs/StringDictionary.h>

namespace app::classes::types {
    namespace StringDictionary {
        namespace {
            inline app::StringDictionary__Class* type_info_ref = nullptr;
        }
        inline app::StringDictionary__Class** type_info = &type_info_ref;
        inline app::StringDictionary__Class* get_class() {
            return il2cpp::get_class<app::StringDictionary__Class>(type_info, "System.Collections.Specialized", "StringDictionary");
        }
        inline app::StringDictionary* create() {
            return il2cpp::create_object<app::StringDictionary>(get_class());
        }
    } // namespace StringDictionary
} // namespace app::classes::types
