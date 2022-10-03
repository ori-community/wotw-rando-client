#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ETrackedPropertyError__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ETrackedPropertyError__Enum__Class** type_info;
        inline app::ETrackedPropertyError__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackedPropertyError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackedPropertyError");
        }
        inline app::ETrackedPropertyError__Enum* create() {
            return il2cpp::create_object<app::ETrackedPropertyError__Enum>(get_class());
        }
    } // namespace ETrackedPropertyError__Enum
} // namespace app::classes::types
