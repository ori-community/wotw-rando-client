#pragma once
#include <Modloader/app/structs/HebrewNumberParsingState__Enum.h>
#include <Modloader/app/structs/HebrewNumberParsingState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HebrewNumberParsingState__Enum {
        inline app::HebrewNumberParsingState__Enum__Class** type_info() {
            static app::HebrewNumberParsingState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HebrewNumberParsingState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HebrewNumberParsingState__Enum__Class* get_class() {
            return il2cpp::get_class<app::HebrewNumberParsingState__Enum__Class>(type_info(), "System.Globalization", "HebrewNumberParsingState");
        }
        inline app::HebrewNumberParsingState__Enum* create() {
            return il2cpp::create_object<app::HebrewNumberParsingState__Enum>(get_class());
        }
    } // namespace HebrewNumberParsingState__Enum
} // namespace app::classes::types
