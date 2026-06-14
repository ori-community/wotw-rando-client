#pragma once
#include <Modloader/app/structs/InputField_SubmitEvent.h>
#include <Modloader/app/structs/InputField_SubmitEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputField_SubmitEvent {
        inline app::InputField_SubmitEvent__Class** type_info() {
            static app::InputField_SubmitEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputField_SubmitEvent__Class**)(modloader::win::memory::resolve_rva(0x0473A418));
            }
            return cache;
        }
        inline app::InputField_SubmitEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_SubmitEvent__Class>(type_info(), "UnityEngine.UI", "InputField", "SubmitEvent");
        }
        inline app::InputField_SubmitEvent* create() {
            return il2cpp::create_object<app::InputField_SubmitEvent>(get_class());
        }
    } // namespace InputField_SubmitEvent
} // namespace app::classes::types
