#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PressAnyButtonPrompt {
        namespace {
            inline app::PressAnyButtonPrompt__Class* type_info_ref = nullptr;
        }
        inline app::PressAnyButtonPrompt__Class** type_info = &type_info_ref;
        inline app::PressAnyButtonPrompt__Class* get_class() {
            return il2cpp::get_class<app::PressAnyButtonPrompt__Class>(type_info, "", "PressAnyButtonPrompt");
        }
        inline app::PressAnyButtonPrompt* create() {
            return il2cpp::create_object<app::PressAnyButtonPrompt>(get_class());
        }
    } // namespace PressAnyButtonPrompt
} // namespace app::classes::types
