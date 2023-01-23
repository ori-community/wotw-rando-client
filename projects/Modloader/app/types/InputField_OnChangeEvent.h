#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InputField_OnChangeEvent__Class.h>
#include <Modloader/app/structs/InputField_OnChangeEvent.h>

namespace app::classes::types {
    namespace InputField_OnChangeEvent {
        inline app::InputField_OnChangeEvent__Class** type_info = (app::InputField_OnChangeEvent__Class**)(modloader::win::memory::resolve_rva(0x04761D58));
        inline app::InputField_OnChangeEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_OnChangeEvent__Class>(type_info, "UnityEngine.UI", "InputField", "OnChangeEvent");
        }
        inline app::InputField_OnChangeEvent* create() {
            return il2cpp::create_object<app::InputField_OnChangeEvent>(get_class());
        }
    } // namespace InputField_OnChangeEvent
} // namespace app::classes::types
