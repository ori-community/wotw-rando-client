#pragma once
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected__Array.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_SoundHandleProtected__Array {
        inline app::WwiseEventSystem_SoundHandleProtected__Array__Class** type_info() {
            static app::WwiseEventSystem_SoundHandleProtected__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseEventSystem_SoundHandleProtected__Array__Class**)(modloader::win::memory::resolve_rva(0x04782F00));
            }
            return cache;
        }
        inline app::WwiseEventSystem_SoundHandleProtected__Array__Class* get_class() {
            return il2cpp::get_class<app::WwiseEventSystem_SoundHandleProtected__Array__Class>(type_info(), "Moon.Wwise", "WwiseEventSystem+SoundHandleProtected[]");
        }
        inline app::WwiseEventSystem_SoundHandleProtected__Array* create() {
            return il2cpp::create_object<app::WwiseEventSystem_SoundHandleProtected__Array>(get_class());
        }
    } // namespace WwiseEventSystem_SoundHandleProtected__Array
} // namespace app::classes::types
