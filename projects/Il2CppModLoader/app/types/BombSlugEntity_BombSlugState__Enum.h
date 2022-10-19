#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BombSlugEntity_BombSlugState__Enum {
        namespace {
            inline app::BombSlugEntity_BombSlugState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BombSlugEntity_BombSlugState__Enum__Class** type_info = &type_info_ref;
        inline app::BombSlugEntity_BombSlugState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BombSlugEntity_BombSlugState__Enum__Class>(type_info, "", "BombSlugEntity", "BombSlugState");
        }
        inline app::BombSlugEntity_BombSlugState__Enum* create() {
            return il2cpp::create_object<app::BombSlugEntity_BombSlugState__Enum>(get_class());
        }
    } // namespace BombSlugEntity_BombSlugState__Enum
} // namespace app::classes::types
