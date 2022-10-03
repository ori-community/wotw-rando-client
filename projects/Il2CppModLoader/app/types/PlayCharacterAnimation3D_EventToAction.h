#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayCharacterAnimation3D_EventToAction {
        namespace {
            app::PlayCharacterAnimation3D_EventToAction__Class* type_info_ref = nullptr;
        }
        app::PlayCharacterAnimation3D_EventToAction__Class** type_info = &type_info_ref;
        inline app::PlayCharacterAnimation3D_EventToAction__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayCharacterAnimation3D_EventToAction__Class>(type_info, "", "PlayCharacterAnimation3D", "EventToAction");
        }
        inline app::PlayCharacterAnimation3D_EventToAction* create() {
            return il2cpp::create_object<app::PlayCharacterAnimation3D_EventToAction>(get_class());
        }
        inline app::PlayCharacterAnimation3D_EventToAction__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayCharacterAnimation3D_EventToAction__Array>(get_class(), size);
        }
    } // namespace PlayCharacterAnimation3D_EventToAction
} // namespace app::classes::types
