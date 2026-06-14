#pragma once
#include <Modloader/app/structs/EPersonaChange__Enum.h>
#include <Modloader/app/structs/EPersonaChange__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EPersonaChange__Enum {
        inline app::EPersonaChange__Enum__Class** type_info() {
            static app::EPersonaChange__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EPersonaChange__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EPersonaChange__Enum__Class* get_class() {
            return il2cpp::get_class<app::EPersonaChange__Enum__Class>(type_info(), "Steamworks", "EPersonaChange");
        }
        inline app::EPersonaChange__Enum* create() {
            return il2cpp::create_object<app::EPersonaChange__Enum>(get_class());
        }
    } // namespace EPersonaChange__Enum
} // namespace app::classes::types
