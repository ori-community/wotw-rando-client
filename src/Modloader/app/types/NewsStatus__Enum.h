#pragma once
#include <Modloader/app/structs/NewsStatus__Enum.h>
#include <Modloader/app/structs/NewsStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewsStatus__Enum {
        inline app::NewsStatus__Enum__Class** type_info() {
            static app::NewsStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewsStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewsStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::NewsStatus__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "NewsStatus");
        }
        inline app::NewsStatus__Enum* create() {
            return il2cpp::create_object<app::NewsStatus__Enum>(get_class());
        }
    } // namespace NewsStatus__Enum
} // namespace app::classes::types
