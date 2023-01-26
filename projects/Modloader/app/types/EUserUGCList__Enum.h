#pragma once
#include <Modloader/app/structs/EUserUGCList__Enum.h>
#include <Modloader/app/structs/EUserUGCList__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EUserUGCList__Enum {
        inline app::EUserUGCList__Enum__Class** type_info() {
            static app::EUserUGCList__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EUserUGCList__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EUserUGCList__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUserUGCList__Enum__Class>(type_info(), "Steamworks", "EUserUGCList");
        }
        inline app::EUserUGCList__Enum* create() {
            return il2cpp::create_object<app::EUserUGCList__Enum>(get_class());
        }
    } // namespace EUserUGCList__Enum
} // namespace app::classes::types
