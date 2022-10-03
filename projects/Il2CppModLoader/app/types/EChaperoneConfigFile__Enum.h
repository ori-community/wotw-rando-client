#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EChaperoneConfigFile__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EChaperoneConfigFile__Enum__Class** type_info;
        inline app::EChaperoneConfigFile__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChaperoneConfigFile__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EChaperoneConfigFile");
        }
        inline app::EChaperoneConfigFile__Enum* create() {
            return il2cpp::create_object<app::EChaperoneConfigFile__Enum>(get_class());
        }
    } // namespace EChaperoneConfigFile__Enum
} // namespace app::classes::types
