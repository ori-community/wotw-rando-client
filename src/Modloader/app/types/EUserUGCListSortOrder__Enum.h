#pragma once
#include <Modloader/app/structs/EUserUGCListSortOrder__Enum.h>
#include <Modloader/app/structs/EUserUGCListSortOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EUserUGCListSortOrder__Enum {
        inline app::EUserUGCListSortOrder__Enum__Class** type_info() {
            static app::EUserUGCListSortOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EUserUGCListSortOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EUserUGCListSortOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUserUGCListSortOrder__Enum__Class>(type_info(), "Steamworks", "EUserUGCListSortOrder");
        }
        inline app::EUserUGCListSortOrder__Enum* create() {
            return il2cpp::create_object<app::EUserUGCListSortOrder__Enum>(get_class());
        }
    } // namespace EUserUGCListSortOrder__Enum
} // namespace app::classes::types
