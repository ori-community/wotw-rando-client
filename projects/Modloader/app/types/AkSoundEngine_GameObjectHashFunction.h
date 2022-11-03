#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkSoundEngine_GameObjectHashFunction {
        inline app::AkSoundEngine_GameObjectHashFunction__Class** type_info = (app::AkSoundEngine_GameObjectHashFunction__Class**)(modloader::win::memory::resolve_rva(0x04753698));
        inline app::AkSoundEngine_GameObjectHashFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::AkSoundEngine_GameObjectHashFunction__Class>(type_info, "", "AkSoundEngine", "GameObjectHashFunction");
        }
        inline app::AkSoundEngine_GameObjectHashFunction* create() {
            return il2cpp::create_object<app::AkSoundEngine_GameObjectHashFunction>(get_class());
        }
    } // namespace AkSoundEngine_GameObjectHashFunction
} // namespace app::classes::types
