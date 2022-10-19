#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttachSoundToPhysicsSystem {
        namespace {
            inline app::AttachSoundToPhysicsSystem__Class* type_info_ref = nullptr;
        }
        inline app::AttachSoundToPhysicsSystem__Class** type_info = &type_info_ref;
        inline app::AttachSoundToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::AttachSoundToPhysicsSystem__Class>(type_info, "", "AttachSoundToPhysicsSystem");
        }
        inline app::AttachSoundToPhysicsSystem* create() {
            return il2cpp::create_object<app::AttachSoundToPhysicsSystem>(get_class());
        }
    } // namespace AttachSoundToPhysicsSystem
} // namespace app::classes::types
