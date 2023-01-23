#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyWaitForTrigger__Class.h>
#include <Modloader/app/structs/LegacyWaitForTrigger.h>

namespace app::classes::types {
    namespace LegacyWaitForTrigger {
        namespace {
            inline app::LegacyWaitForTrigger__Class* type_info_ref = nullptr;
        }
        inline app::LegacyWaitForTrigger__Class** type_info = &type_info_ref;
        inline app::LegacyWaitForTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyWaitForTrigger__Class>(type_info, "", "LegacyWaitForTrigger");
        }
        inline app::LegacyWaitForTrigger* create() {
            return il2cpp::create_object<app::LegacyWaitForTrigger>(get_class());
        }
    } // namespace LegacyWaitForTrigger
} // namespace app::classes::types
