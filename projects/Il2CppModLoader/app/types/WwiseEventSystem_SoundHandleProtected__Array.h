#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseEventSystem_SoundHandleProtected__Array {
        inline app::WwiseEventSystem_SoundHandleProtected__Array__Class** type_info = (app::WwiseEventSystem_SoundHandleProtected__Array__Class**)(modloader::win::memory::resolve_rva(0x04782F00));
        inline app::WwiseEventSystem_SoundHandleProtected__Array__Class* get_class() {
            return il2cpp::get_class<app::WwiseEventSystem_SoundHandleProtected__Array__Class>(type_info, "Moon.Wwise", "WwiseEventSystem+SoundHandleProtected[]");
        }
        inline app::WwiseEventSystem_SoundHandleProtected__Array* create() {
            return il2cpp::create_object<app::WwiseEventSystem_SoundHandleProtected__Array>(get_class());
        }
    } // namespace WwiseEventSystem_SoundHandleProtected__Array
} // namespace app::classes::types
