#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyWaitForInput__Class.h>
#include <Modloader/app/structs/LegacyWaitForInput.h>

namespace app::classes::types {
    namespace LegacyWaitForInput {
        namespace {
            inline app::LegacyWaitForInput__Class* type_info_ref = nullptr;
        }
        inline app::LegacyWaitForInput__Class** type_info = &type_info_ref;
        inline app::LegacyWaitForInput__Class* get_class() {
            return il2cpp::get_class<app::LegacyWaitForInput__Class>(type_info, "", "LegacyWaitForInput");
        }
        inline app::LegacyWaitForInput* create() {
            return il2cpp::create_object<app::LegacyWaitForInput>(get_class());
        }
    } // namespace LegacyWaitForInput
} // namespace app::classes::types
