#pragma once
#include <Modloader/app/structs/CallbackIdentities.h>
#include <Modloader/app/structs/CallbackIdentities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallbackIdentities {
        inline app::CallbackIdentities__Class** type_info() {
            static app::CallbackIdentities__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallbackIdentities__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallbackIdentities__Class* get_class() {
            return il2cpp::get_class<app::CallbackIdentities__Class>(type_info(), "Steamworks", "CallbackIdentities");
        }
        inline app::CallbackIdentities* create() {
            return il2cpp::create_object<app::CallbackIdentities>(get_class());
        }
    } // namespace CallbackIdentities
} // namespace app::classes::types
