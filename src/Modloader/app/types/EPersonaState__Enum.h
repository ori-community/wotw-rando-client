#pragma once
#include <Modloader/app/structs/EPersonaState__Enum.h>
#include <Modloader/app/structs/EPersonaState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EPersonaState__Enum {
        inline app::EPersonaState__Enum__Class** type_info() {
            static app::EPersonaState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EPersonaState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EPersonaState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EPersonaState__Enum__Class>(type_info(), "Steamworks", "EPersonaState");
        }
        inline app::EPersonaState__Enum* create() {
            return il2cpp::create_object<app::EPersonaState__Enum>(get_class());
        }
    } // namespace EPersonaState__Enum
} // namespace app::classes::types
