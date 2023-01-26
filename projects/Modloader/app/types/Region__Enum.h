#pragma once
#include <Modloader/app/structs/Region__Enum.h>
#include <Modloader/app/structs/Region__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Region__Enum {
        inline app::Region__Enum__Class** type_info() {
            static app::Region__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Region__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Region__Enum__Class* get_class() {
            return il2cpp::get_class<app::Region__Enum__Class>(type_info(), "PlayFab.ClientModels", "Region");
        }
        inline app::Region__Enum* create() {
            return il2cpp::create_object<app::Region__Enum>(get_class());
        }
    } // namespace Region__Enum
} // namespace app::classes::types
