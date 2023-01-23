#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InputField__Class.h>
#include <Modloader/app/structs/InputField.h>

namespace app::classes::types {
    namespace InputField {
        inline app::InputField__Class** type_info = (app::InputField__Class**)(modloader::win::memory::resolve_rva(0x04748FF8));
        inline app::InputField__Class* get_class() {
            return il2cpp::get_class<app::InputField__Class>(type_info, "UnityEngine.UI", "InputField");
        }
        inline app::InputField* create() {
            return il2cpp::create_object<app::InputField>(get_class());
        }
    } // namespace InputField
} // namespace app::classes::types
