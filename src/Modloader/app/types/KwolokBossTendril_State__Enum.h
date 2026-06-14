#pragma once
#include <Modloader/app/structs/KwolokBossTendril_State__Enum.h>
#include <Modloader/app/structs/KwolokBossTendril_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendril_State__Enum {
        inline app::KwolokBossTendril_State__Enum__Class** type_info() {
            static app::KwolokBossTendril_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossTendril_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossTendril_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendril_State__Enum__Class>(type_info(), "", "KwolokBossTendril", "State");
        }
        inline app::KwolokBossTendril_State__Enum* create() {
            return il2cpp::create_object<app::KwolokBossTendril_State__Enum>(get_class());
        }
    } // namespace KwolokBossTendril_State__Enum
} // namespace app::classes::types
