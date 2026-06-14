#pragma once
#include <Modloader/app/structs/EWorkshopVote__Enum.h>
#include <Modloader/app/structs/EWorkshopVote__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EWorkshopVote__Enum {
        inline app::EWorkshopVote__Enum__Class** type_info() {
            static app::EWorkshopVote__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EWorkshopVote__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EWorkshopVote__Enum__Class* get_class() {
            return il2cpp::get_class<app::EWorkshopVote__Enum__Class>(type_info(), "Steamworks", "EWorkshopVote");
        }
        inline app::EWorkshopVote__Enum* create() {
            return il2cpp::create_object<app::EWorkshopVote__Enum>(get_class());
        }
    } // namespace EWorkshopVote__Enum
} // namespace app::classes::types
