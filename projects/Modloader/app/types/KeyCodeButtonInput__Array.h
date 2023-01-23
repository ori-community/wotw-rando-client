#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeyCodeButtonInput__Array__Class.h>
#include <Modloader/app/structs/KeyCodeButtonInput__Array.h>

namespace app::classes::types {
    namespace KeyCodeButtonInput__Array {
        namespace {
            inline app::KeyCodeButtonInput__Array__Class* type_info_ref = nullptr;
        }
        inline app::KeyCodeButtonInput__Array__Class** type_info = &type_info_ref;
        inline app::KeyCodeButtonInput__Array__Class* get_class() {
            return il2cpp::get_class<app::KeyCodeButtonInput__Array__Class>(type_info, "SmartInput", "KeyCodeButtonInput[]");
        }
        inline app::KeyCodeButtonInput__Array* create() {
            return il2cpp::create_object<app::KeyCodeButtonInput__Array>(get_class());
        }
    } // namespace KeyCodeButtonInput__Array
} // namespace app::classes::types
