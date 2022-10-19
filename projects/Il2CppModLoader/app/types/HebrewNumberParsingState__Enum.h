#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HebrewNumberParsingState__Enum {
        namespace {
            inline app::HebrewNumberParsingState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HebrewNumberParsingState__Enum__Class** type_info = &type_info_ref;
        inline app::HebrewNumberParsingState__Enum__Class* get_class() {
            return il2cpp::get_class<app::HebrewNumberParsingState__Enum__Class>(type_info, "System.Globalization", "HebrewNumberParsingState");
        }
        inline app::HebrewNumberParsingState__Enum* create() {
            return il2cpp::create_object<app::HebrewNumberParsingState__Enum>(get_class());
        }
    } // namespace HebrewNumberParsingState__Enum
} // namespace app::classes::types
