#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParseResult__Enum {
        namespace {
            inline app::ParseResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ParseResult__Enum__Class** type_info = &type_info_ref;
        inline app::ParseResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParseResult__Enum__Class>(type_info, "Newtonsoft.Json.Utilities", "ParseResult");
        }
        inline app::ParseResult__Enum* create() {
            return il2cpp::create_object<app::ParseResult__Enum>(get_class());
        }
    } // namespace ParseResult__Enum
} // namespace app::classes::types
