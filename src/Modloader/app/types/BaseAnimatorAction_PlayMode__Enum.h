#pragma once
#include <Modloader/app/structs/BaseAnimatorAction_PlayMode__Enum.h>
#include <Modloader/app/structs/BaseAnimatorAction_PlayMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseAnimatorAction_PlayMode__Enum {
        inline app::BaseAnimatorAction_PlayMode__Enum__Class** type_info() {
            static app::BaseAnimatorAction_PlayMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseAnimatorAction_PlayMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseAnimatorAction_PlayMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseAnimatorAction_PlayMode__Enum__Class>(type_info(), "", "BaseAnimatorAction", "PlayMode");
        }
        inline app::BaseAnimatorAction_PlayMode__Enum* create() {
            return il2cpp::create_object<app::BaseAnimatorAction_PlayMode__Enum>(get_class());
        }
    } // namespace BaseAnimatorAction_PlayMode__Enum
} // namespace app::classes::types
