#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction__Class.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction__Array.h>

namespace app::classes::types {
    namespace PlayCharacterAnimation3D_EventToAction {
        namespace {
            inline app::PlayCharacterAnimation3D_EventToAction__Class* type_info_ref = nullptr;
        }
        inline app::PlayCharacterAnimation3D_EventToAction__Class** type_info = &type_info_ref;
        inline app::PlayCharacterAnimation3D_EventToAction__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayCharacterAnimation3D_EventToAction__Class>(type_info, "", "PlayCharacterAnimation3D", "EventToAction");
        }
        inline app::PlayCharacterAnimation3D_EventToAction* create() {
            return il2cpp::create_object<app::PlayCharacterAnimation3D_EventToAction>(get_class());
        }
        inline app::PlayCharacterAnimation3D_EventToAction__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayCharacterAnimation3D_EventToAction__Array>(get_class(), size);
        }
        inline app::PlayCharacterAnimation3D_EventToAction__Array* create_array(const std::vector<app::PlayCharacterAnimation3D_EventToAction*>& items) {
            return il2cpp::array_new<app::PlayCharacterAnimation3D_EventToAction__Array>(get_class(), items);
        }
    } // namespace PlayCharacterAnimation3D_EventToAction
} // namespace app::classes::types
