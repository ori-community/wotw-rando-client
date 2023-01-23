#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StandaloneInputModule_InputMode__Enum__Class.h>
#include <Modloader/app/structs/StandaloneInputModule_InputMode__Enum.h>

namespace app::classes::types {
    namespace StandaloneInputModule_InputMode__Enum {
        namespace {
            inline app::StandaloneInputModule_InputMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StandaloneInputModule_InputMode__Enum__Class** type_info = &type_info_ref;
        inline app::StandaloneInputModule_InputMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StandaloneInputModule_InputMode__Enum__Class>(type_info, "UnityEngine.EventSystems", "StandaloneInputModule", "InputMode");
        }
        inline app::StandaloneInputModule_InputMode__Enum* create() {
            return il2cpp::create_object<app::StandaloneInputModule_InputMode__Enum>(get_class());
        }
    } // namespace StandaloneInputModule_InputMode__Enum
} // namespace app::classes::types
