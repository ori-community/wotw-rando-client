#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokNpcEntity_KwolokLocation__Enum {
        namespace {
            inline app::KwolokNpcEntity_KwolokLocation__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KwolokNpcEntity_KwolokLocation__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokNpcEntity_KwolokLocation__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokNpcEntity_KwolokLocation__Enum__Class>(type_info, "", "KwolokNpcEntity", "KwolokLocation");
        }
        inline app::KwolokNpcEntity_KwolokLocation__Enum* create() {
            return il2cpp::create_object<app::KwolokNpcEntity_KwolokLocation__Enum>(get_class());
        }
    } // namespace KwolokNpcEntity_KwolokLocation__Enum
} // namespace app::classes::types
