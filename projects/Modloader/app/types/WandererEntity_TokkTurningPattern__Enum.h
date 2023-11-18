#pragma once
#include <Modloader/app/structs/WandererEntity_TokkTurningPattern__Enum.h>
#include <Modloader/app/structs/WandererEntity_TokkTurningPattern__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererEntity_TokkTurningPattern__Enum {
        inline app::WandererEntity_TokkTurningPattern__Enum__Class** type_info() {
            static app::WandererEntity_TokkTurningPattern__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererEntity_TokkTurningPattern__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererEntity_TokkTurningPattern__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererEntity_TokkTurningPattern__Enum__Class>(type_info(), "", "WandererEntity", "TokkTurningPattern");
        }
        inline app::WandererEntity_TokkTurningPattern__Enum* create() {
            return il2cpp::create_object<app::WandererEntity_TokkTurningPattern__Enum>(get_class());
        }
    } // namespace WandererEntity_TokkTurningPattern__Enum
} // namespace app::classes::types
