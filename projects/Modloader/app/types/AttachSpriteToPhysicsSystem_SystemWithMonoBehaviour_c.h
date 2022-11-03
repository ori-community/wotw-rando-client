#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c {
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class** type_info = (app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047170B0));
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class>(type_info, "", "AttachSpriteToPhysicsSystem+SystemWithMonoBehaviour", "<>c");
        }
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c
} // namespace app::classes::types
