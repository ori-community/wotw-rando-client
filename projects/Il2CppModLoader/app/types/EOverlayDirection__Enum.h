#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EOverlayDirection__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EOverlayDirection__Enum__Class** type_info;
        inline app::EOverlayDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::EOverlayDirection__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EOverlayDirection");
        }
        inline app::EOverlayDirection__Enum* create() {
            return il2cpp::create_object<app::EOverlayDirection__Enum>(get_class());
        }
    } // namespace EOverlayDirection__Enum
} // namespace app::classes::types
