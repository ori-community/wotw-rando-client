#pragma once
#include <Modloader/app/structs/NativeInputSystem.h>
#include <Modloader/app/structs/NativeInputSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeInputSystem {
        inline app::NativeInputSystem__Class** type_info() {
            static app::NativeInputSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NativeInputSystem__Class**)(modloader::win::memory::resolve_rva(0x04721910));
            }
            return cache;
        }
        inline app::NativeInputSystem__Class* get_class() {
            return il2cpp::get_class<app::NativeInputSystem__Class>(type_info(), "UnityEngineInternal.Input", "NativeInputSystem");
        }
        inline app::NativeInputSystem* create() {
            return il2cpp::create_object<app::NativeInputSystem>(get_class());
        }
    } // namespace NativeInputSystem
} // namespace app::classes::types
