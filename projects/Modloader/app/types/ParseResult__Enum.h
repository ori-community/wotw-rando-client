#pragma once
#include <Modloader/app/structs/ParseResult__Enum.h>
#include <Modloader/app/structs/ParseResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParseResult__Enum {
        inline app::ParseResult__Enum__Class** type_info() {
            static app::ParseResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParseResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParseResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParseResult__Enum__Class>(type_info(), "Newtonsoft.Json.Utilities", "ParseResult");
        }
        inline app::ParseResult__Enum* create() {
            return il2cpp::create_object<app::ParseResult__Enum>(get_class());
        }
    } // namespace ParseResult__Enum
} // namespace app::classes::types
