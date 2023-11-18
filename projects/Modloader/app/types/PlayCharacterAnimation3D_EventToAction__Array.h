#pragma once
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction__Array.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayCharacterAnimation3D_EventToAction__Array {
        inline app::PlayCharacterAnimation3D_EventToAction__Array__Class** type_info() {
            static app::PlayCharacterAnimation3D_EventToAction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayCharacterAnimation3D_EventToAction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayCharacterAnimation3D_EventToAction__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayCharacterAnimation3D_EventToAction__Array__Class>(type_info(), "", "PlayCharacterAnimation3D+EventToAction[]");
        }
        inline app::PlayCharacterAnimation3D_EventToAction__Array* create() {
            return il2cpp::create_object<app::PlayCharacterAnimation3D_EventToAction__Array>(get_class());
        }
    } // namespace PlayCharacterAnimation3D_EventToAction__Array
} // namespace app::classes::types
