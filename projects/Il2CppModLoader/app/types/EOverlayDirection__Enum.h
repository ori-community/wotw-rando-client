#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EOverlayDirection__Enum {
        inline app::EOverlayDirection__Enum__Class** type_info = (app::EOverlayDirection__Enum__Class**)(modloader::win::memory::resolve_rva(0x04791208));
        inline app::EOverlayDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::EOverlayDirection__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EOverlayDirection");
        }
        inline app::EOverlayDirection__Enum* create() {
            return il2cpp::create_object<app::EOverlayDirection__Enum>(get_class());
        }
    } // namespace EOverlayDirection__Enum
} // namespace app::classes::types
