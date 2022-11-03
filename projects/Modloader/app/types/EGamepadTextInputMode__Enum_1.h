#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EGamepadTextInputMode__Enum_1 {
        namespace {
            inline app::EGamepadTextInputMode__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::EGamepadTextInputMode__Enum_1__Class** type_info = &type_info_ref;
        inline app::EGamepadTextInputMode__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::EGamepadTextInputMode__Enum_1__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EGamepadTextInputMode");
        }
        inline app::EGamepadTextInputMode__Enum_1* create() {
            return il2cpp::create_object<app::EGamepadTextInputMode__Enum_1>(get_class());
        }
    } // namespace EGamepadTextInputMode__Enum_1
} // namespace app::classes::types
