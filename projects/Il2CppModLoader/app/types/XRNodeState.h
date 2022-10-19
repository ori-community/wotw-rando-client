#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRNodeState {
        inline app::XRNodeState__Class** type_info = (app::XRNodeState__Class**)(modloader::win::memory::resolve_rva(0x047556A0));
        inline app::XRNodeState__Class* get_class() {
            return il2cpp::get_class<app::XRNodeState__Class>(type_info, "UnityEngine.XR", "XRNodeState");
        }
        inline app::XRNodeState* create() {
            return il2cpp::create_object<app::XRNodeState>(get_class());
        }
        inline app::XRNodeState__Boxed* box(app::XRNodeState value) {
            return il2cpp::box_value<app::XRNodeState__Boxed>(get_class(), value);
        }
    } // namespace XRNodeState
} // namespace app::classes::types
