#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_EventState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseEventSystem_EventState__Class** type_info;
        inline app::WwiseEventSystem_EventState__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_EventState__Class>(type_info, "Moon.Wwise", "WwiseEventSystem", "EventState");
        }
        inline app::WwiseEventSystem_EventState* create() {
            return il2cpp::create_object<app::WwiseEventSystem_EventState>(get_class());
        }
    } // namespace WwiseEventSystem_EventState
} // namespace app::classes::types
