#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttachSoundToPhysicsSystem_SoundTypes__Enum__Class.h>
#include <Modloader/app/structs/AttachSoundToPhysicsSystem_SoundTypes__Enum.h>

namespace app::classes::types {
    namespace AttachSoundToPhysicsSystem_SoundTypes__Enum {
        namespace {
            inline app::AttachSoundToPhysicsSystem_SoundTypes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AttachSoundToPhysicsSystem_SoundTypes__Enum__Class** type_info = &type_info_ref;
        inline app::AttachSoundToPhysicsSystem_SoundTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSoundToPhysicsSystem_SoundTypes__Enum__Class>(type_info, "", "AttachSoundToPhysicsSystem", "SoundTypes");
        }
        inline app::AttachSoundToPhysicsSystem_SoundTypes__Enum* create() {
            return il2cpp::create_object<app::AttachSoundToPhysicsSystem_SoundTypes__Enum>(get_class());
        }
    } // namespace AttachSoundToPhysicsSystem_SoundTypes__Enum
} // namespace app::classes::types
