#pragma once
#include <Modloader/app/structs/LandOnState__Enum.h>
#include <Modloader/app/structs/LandOnState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LandOnState__Enum {
        inline app::LandOnState__Enum__Class** type_info() {
            static app::LandOnState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LandOnState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LandOnState__Enum__Class* get_class() {
            return il2cpp::get_class<app::LandOnState__Enum__Class>(type_info(), "", "LandOnState");
        }
        inline app::LandOnState__Enum* create() {
            return il2cpp::create_object<app::LandOnState__Enum>(get_class());
        }
    } // namespace LandOnState__Enum
} // namespace app::classes::types
