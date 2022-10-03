#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_SoundHandleProtected__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseEventSystem_SoundHandleProtected__Array__Class** type_info;
        inline app::WwiseEventSystem_SoundHandleProtected__Array__Class* get_class() {
            return il2cpp::get_class<app::WwiseEventSystem_SoundHandleProtected__Array__Class>(type_info, "Moon.Wwise", "WwiseEventSystem+SoundHandleProtected[]");
        }
        inline app::WwiseEventSystem_SoundHandleProtected__Array* create() {
            return il2cpp::create_object<app::WwiseEventSystem_SoundHandleProtected__Array>(get_class());
        }
    } // namespace WwiseEventSystem_SoundHandleProtected__Array
} // namespace app::classes::types
