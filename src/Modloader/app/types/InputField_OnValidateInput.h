#pragma once
#include <Modloader/app/structs/InputField_OnValidateInput.h>
#include <Modloader/app/structs/InputField_OnValidateInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputField_OnValidateInput {
        inline app::InputField_OnValidateInput__Class** type_info() {
            static app::InputField_OnValidateInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputField_OnValidateInput__Class**)(modloader::win::memory::resolve_rva(0x047489F0));
            }
            return cache;
        }
        inline app::InputField_OnValidateInput__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_OnValidateInput__Class>(type_info(), "UnityEngine.UI", "InputField", "OnValidateInput");
        }
        inline app::InputField_OnValidateInput* create() {
            return il2cpp::create_object<app::InputField_OnValidateInput>(get_class());
        }
    } // namespace InputField_OnValidateInput
} // namespace app::classes::types
