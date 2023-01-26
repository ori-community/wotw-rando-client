#pragma once
#include <Modloader/app/structs/GameplayCameraTargetEntry_Type__Enum.h>
#include <Modloader/app/structs/GameplayCameraTargetEntry_Type__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplayCameraTargetEntry_Type__Enum {
        inline app::GameplayCameraTargetEntry_Type__Enum__Class** type_info() {
            static app::GameplayCameraTargetEntry_Type__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameplayCameraTargetEntry_Type__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameplayCameraTargetEntry_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameplayCameraTargetEntry_Type__Enum__Class>(type_info(), "", "GameplayCameraTargetEntry", "Type");
        }
        inline app::GameplayCameraTargetEntry_Type__Enum* create() {
            return il2cpp::create_object<app::GameplayCameraTargetEntry_Type__Enum>(get_class());
        }
    } // namespace GameplayCameraTargetEntry_Type__Enum
} // namespace app::classes::types
