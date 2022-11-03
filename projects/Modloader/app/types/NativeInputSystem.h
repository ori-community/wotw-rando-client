#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeInputSystem {
        inline app::NativeInputSystem__Class** type_info = (app::NativeInputSystem__Class**)(modloader::win::memory::resolve_rva(0x04721910));
        inline app::NativeInputSystem__Class* get_class() {
            return il2cpp::get_class<app::NativeInputSystem__Class>(type_info, "UnityEngineInternal.Input", "NativeInputSystem");
        }
        inline app::NativeInputSystem* create() {
            return il2cpp::create_object<app::NativeInputSystem>(get_class());
        }
    } // namespace NativeInputSystem
} // namespace app::classes::types
