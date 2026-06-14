#pragma once
#include <Modloader/app/structs/EWorkshopFileAction__Enum.h>
#include <Modloader/app/structs/EWorkshopFileAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EWorkshopFileAction__Enum {
        inline app::EWorkshopFileAction__Enum__Class** type_info() {
            static app::EWorkshopFileAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EWorkshopFileAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EWorkshopFileAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::EWorkshopFileAction__Enum__Class>(type_info(), "Steamworks", "EWorkshopFileAction");
        }
        inline app::EWorkshopFileAction__Enum* create() {
            return il2cpp::create_object<app::EWorkshopFileAction__Enum>(get_class());
        }
    } // namespace EWorkshopFileAction__Enum
} // namespace app::classes::types
