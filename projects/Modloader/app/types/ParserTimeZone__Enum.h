#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParserTimeZone__Enum {
        namespace {
            inline app::ParserTimeZone__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ParserTimeZone__Enum__Class** type_info = &type_info_ref;
        inline app::ParserTimeZone__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParserTimeZone__Enum__Class>(type_info, "Newtonsoft.Json.Utilities", "ParserTimeZone");
        }
        inline app::ParserTimeZone__Enum* create() {
            return il2cpp::create_object<app::ParserTimeZone__Enum>(get_class());
        }
    } // namespace ParserTimeZone__Enum
} // namespace app::classes::types
