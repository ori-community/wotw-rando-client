#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CallbackIdentities__Class.h>
#include <Modloader/app/structs/CallbackIdentities.h>

namespace app::classes::types {
    namespace CallbackIdentities {
        namespace {
            inline app::CallbackIdentities__Class* type_info_ref = nullptr;
        }
        inline app::CallbackIdentities__Class** type_info = &type_info_ref;
        inline app::CallbackIdentities__Class* get_class() {
            return il2cpp::get_class<app::CallbackIdentities__Class>(type_info, "Steamworks", "CallbackIdentities");
        }
        inline app::CallbackIdentities* create() {
            return il2cpp::create_object<app::CallbackIdentities>(get_class());
        }
    } // namespace CallbackIdentities
} // namespace app::classes::types
