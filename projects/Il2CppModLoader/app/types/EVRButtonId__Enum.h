#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRButtonId__Enum {
        inline app::EVRButtonId__Enum__Class** type_info = (app::EVRButtonId__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471B7B8));
        inline app::EVRButtonId__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRButtonId__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRButtonId");
        }
        inline app::EVRButtonId__Enum* create() {
            return il2cpp::create_object<app::EVRButtonId__Enum>(get_class());
        }
    } // namespace EVRButtonId__Enum
} // namespace app::classes::types
