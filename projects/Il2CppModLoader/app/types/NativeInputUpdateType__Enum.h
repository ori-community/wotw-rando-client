#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeInputUpdateType__Enum {
        inline app::NativeInputUpdateType__Enum__Class** type_info = (app::NativeInputUpdateType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04704330));
        inline app::NativeInputUpdateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::NativeInputUpdateType__Enum__Class>(type_info, "UnityEngineInternal.Input", "NativeInputUpdateType");
        }
        inline app::NativeInputUpdateType__Enum* create() {
            return il2cpp::create_object<app::NativeInputUpdateType__Enum>(get_class());
        }
    } // namespace NativeInputUpdateType__Enum
} // namespace app::classes::types
