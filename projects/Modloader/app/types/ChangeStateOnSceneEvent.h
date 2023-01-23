#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChangeStateOnSceneEvent__Class.h>
#include <Modloader/app/structs/ChangeStateOnSceneEvent.h>

namespace app::classes::types {
    namespace ChangeStateOnSceneEvent {
        namespace {
            inline app::ChangeStateOnSceneEvent__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateOnSceneEvent__Class** type_info = &type_info_ref;
        inline app::ChangeStateOnSceneEvent__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateOnSceneEvent__Class>(type_info, "Moon.Setups", "ChangeStateOnSceneEvent");
        }
        inline app::ChangeStateOnSceneEvent* create() {
            return il2cpp::create_object<app::ChangeStateOnSceneEvent>(get_class());
        }
    } // namespace ChangeStateOnSceneEvent
} // namespace app::classes::types
