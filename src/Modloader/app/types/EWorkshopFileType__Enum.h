#pragma once
#include <Modloader/app/structs/EWorkshopFileType__Enum.h>
#include <Modloader/app/structs/EWorkshopFileType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EWorkshopFileType__Enum {
        inline app::EWorkshopFileType__Enum__Class** type_info() {
            static app::EWorkshopFileType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EWorkshopFileType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EWorkshopFileType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EWorkshopFileType__Enum__Class>(type_info(), "Steamworks", "EWorkshopFileType");
        }
        inline app::EWorkshopFileType__Enum* create() {
            return il2cpp::create_object<app::EWorkshopFileType__Enum>(get_class());
        }
    } // namespace EWorkshopFileType__Enum
} // namespace app::classes::types
