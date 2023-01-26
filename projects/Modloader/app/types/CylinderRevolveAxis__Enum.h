#pragma once
#include <Modloader/app/structs/CylinderRevolveAxis__Enum.h>
#include <Modloader/app/structs/CylinderRevolveAxis__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CylinderRevolveAxis__Enum {
        inline app::CylinderRevolveAxis__Enum__Class** type_info() {
            static app::CylinderRevolveAxis__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CylinderRevolveAxis__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CylinderRevolveAxis__Enum__Class* get_class() {
            return il2cpp::get_class<app::CylinderRevolveAxis__Enum__Class>(type_info(), "CatlikeCoding.TextBox", "CylinderRevolveAxis");
        }
        inline app::CylinderRevolveAxis__Enum* create() {
            return il2cpp::create_object<app::CylinderRevolveAxis__Enum>(get_class());
        }
    } // namespace CylinderRevolveAxis__Enum
} // namespace app::classes::types
