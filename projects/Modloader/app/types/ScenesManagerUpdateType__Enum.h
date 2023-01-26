#pragma once
#include <Modloader/app/structs/ScenesManagerUpdateType__Enum.h>
#include <Modloader/app/structs/ScenesManagerUpdateType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerUpdateType__Enum {
        inline app::ScenesManagerUpdateType__Enum__Class** type_info() {
            static app::ScenesManagerUpdateType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenesManagerUpdateType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenesManagerUpdateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerUpdateType__Enum__Class>(type_info(), "", "ScenesManagerUpdateType");
        }
        inline app::ScenesManagerUpdateType__Enum* create() {
            return il2cpp::create_object<app::ScenesManagerUpdateType__Enum>(get_class());
        }
    } // namespace ScenesManagerUpdateType__Enum
} // namespace app::classes::types
