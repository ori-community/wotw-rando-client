#pragma once
#include <Modloader/app/structs/StopCharacterAnimation.h>
#include <Modloader/app/structs/StopCharacterAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StopCharacterAnimation {
        inline app::StopCharacterAnimation__Class** type_info() {
            static app::StopCharacterAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StopCharacterAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StopCharacterAnimation__Class* get_class() {
            return il2cpp::get_class<app::StopCharacterAnimation__Class>(type_info(), "", "StopCharacterAnimation");
        }
        inline app::StopCharacterAnimation* create() {
            return il2cpp::create_object<app::StopCharacterAnimation>(get_class());
        }
    } // namespace StopCharacterAnimation
} // namespace app::classes::types
