#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WasLastInputKeyboardCondition__Class.h>
#include <Modloader/app/structs/WasLastInputKeyboardCondition.h>

namespace app::classes::types {
    namespace WasLastInputKeyboardCondition {
        namespace {
            inline app::WasLastInputKeyboardCondition__Class* type_info_ref = nullptr;
        }
        inline app::WasLastInputKeyboardCondition__Class** type_info = &type_info_ref;
        inline app::WasLastInputKeyboardCondition__Class* get_class() {
            return il2cpp::get_class<app::WasLastInputKeyboardCondition__Class>(type_info, "", "WasLastInputKeyboardCondition");
        }
        inline app::WasLastInputKeyboardCondition* create() {
            return il2cpp::create_object<app::WasLastInputKeyboardCondition>(get_class());
        }
    } // namespace WasLastInputKeyboardCondition
} // namespace app::classes::types
