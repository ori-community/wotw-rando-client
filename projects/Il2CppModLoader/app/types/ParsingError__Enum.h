#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParsingError__Enum {
        namespace {
            inline app::ParsingError__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ParsingError__Enum__Class** type_info = &type_info_ref;
        inline app::ParsingError__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParsingError__Enum__Class>(type_info, "System", "ParsingError");
        }
        inline app::ParsingError__Enum* create() {
            return il2cpp::create_object<app::ParsingError__Enum>(get_class());
        }
    } // namespace ParsingError__Enum
} // namespace app::classes::types
