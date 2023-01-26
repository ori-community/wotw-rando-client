#pragma once
#include <Modloader/app/structs/ParserTimeZone__Enum.h>
#include <Modloader/app/structs/ParserTimeZone__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParserTimeZone__Enum {
        inline app::ParserTimeZone__Enum__Class** type_info() {
            static app::ParserTimeZone__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParserTimeZone__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParserTimeZone__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParserTimeZone__Enum__Class>(type_info(), "Newtonsoft.Json.Utilities", "ParserTimeZone");
        }
        inline app::ParserTimeZone__Enum* create() {
            return il2cpp::create_object<app::ParserTimeZone__Enum>(get_class());
        }
    } // namespace ParserTimeZone__Enum
} // namespace app::classes::types
