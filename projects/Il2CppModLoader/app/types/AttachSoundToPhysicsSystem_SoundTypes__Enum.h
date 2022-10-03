#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachSoundToPhysicsSystem_SoundTypes__Enum {
        namespace {
            app::AttachSoundToPhysicsSystem_SoundTypes__Enum__Class* type_info_ref = nullptr;
        }
        app::AttachSoundToPhysicsSystem_SoundTypes__Enum__Class** type_info = &type_info_ref;
        inline app::AttachSoundToPhysicsSystem_SoundTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSoundToPhysicsSystem_SoundTypes__Enum__Class>(type_info, "", "AttachSoundToPhysicsSystem", "SoundTypes");
        }
        inline app::AttachSoundToPhysicsSystem_SoundTypes__Enum* create() {
            return il2cpp::create_object<app::AttachSoundToPhysicsSystem_SoundTypes__Enum>(get_class());
        }
    } // namespace AttachSoundToPhysicsSystem_SoundTypes__Enum
} // namespace app::classes::types
