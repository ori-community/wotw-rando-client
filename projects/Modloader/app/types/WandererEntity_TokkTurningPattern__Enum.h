#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WandererEntity_TokkTurningPattern__Enum__Class.h>
#include <Modloader/app/structs/WandererEntity_TokkTurningPattern__Enum.h>

namespace app::classes::types {
    namespace WandererEntity_TokkTurningPattern__Enum {
        namespace {
            inline app::WandererEntity_TokkTurningPattern__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WandererEntity_TokkTurningPattern__Enum__Class** type_info = &type_info_ref;
        inline app::WandererEntity_TokkTurningPattern__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererEntity_TokkTurningPattern__Enum__Class>(type_info, "", "WandererEntity", "TokkTurningPattern");
        }
        inline app::WandererEntity_TokkTurningPattern__Enum* create() {
            return il2cpp::create_object<app::WandererEntity_TokkTurningPattern__Enum>(get_class());
        }
    } // namespace WandererEntity_TokkTurningPattern__Enum
} // namespace app::classes::types
