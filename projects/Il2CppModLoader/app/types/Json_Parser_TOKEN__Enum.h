#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Json_Parser_TOKEN__Enum {
        namespace {
            inline app::Json_Parser_TOKEN__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Json_Parser_TOKEN__Enum__Class** type_info = &type_info_ref;
        inline app::Json_Parser_TOKEN__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Json_Parser_TOKEN__Enum__Class>(type_info, "Moon.Network.Web", "Json+Parser", "TOKEN");
        }
        inline app::Json_Parser_TOKEN__Enum* create() {
            return il2cpp::create_object<app::Json_Parser_TOKEN__Enum>(get_class());
        }
    } // namespace Json_Parser_TOKEN__Enum
} // namespace app::classes::types
