#pragma once
#include <Modloader/app/structs/LegacyWaitForInput.h>
#include <Modloader/app/structs/LegacyWaitForInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyWaitForInput {
        inline app::LegacyWaitForInput__Class** type_info() {
            static app::LegacyWaitForInput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyWaitForInput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyWaitForInput__Class* get_class() {
            return il2cpp::get_class<app::LegacyWaitForInput__Class>(type_info(), "", "LegacyWaitForInput");
        }
        inline app::LegacyWaitForInput* create() {
            return il2cpp::create_object<app::LegacyWaitForInput>(get_class());
        }
    } // namespace LegacyWaitForInput
} // namespace app::classes::types
