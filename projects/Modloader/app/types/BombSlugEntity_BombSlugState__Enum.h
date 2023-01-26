#pragma once
#include <Modloader/app/structs/BombSlugEntity_BombSlugState__Enum.h>
#include <Modloader/app/structs/BombSlugEntity_BombSlugState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BombSlugEntity_BombSlugState__Enum {
        inline app::BombSlugEntity_BombSlugState__Enum__Class** type_info() {
            static app::BombSlugEntity_BombSlugState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BombSlugEntity_BombSlugState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BombSlugEntity_BombSlugState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BombSlugEntity_BombSlugState__Enum__Class>(type_info(), "", "BombSlugEntity", "BombSlugState");
        }
        inline app::BombSlugEntity_BombSlugState__Enum* create() {
            return il2cpp::create_object<app::BombSlugEntity_BombSlugState__Enum>(get_class());
        }
    } // namespace BombSlugEntity_BombSlugState__Enum
} // namespace app::classes::types
