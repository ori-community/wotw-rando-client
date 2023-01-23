#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyTimedTrigger__Class.h>
#include <Modloader/app/structs/LegacyTimedTrigger.h>

namespace app::classes::types {
    namespace LegacyTimedTrigger {
        namespace {
            inline app::LegacyTimedTrigger__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTimedTrigger__Class** type_info = &type_info_ref;
        inline app::LegacyTimedTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimedTrigger__Class>(type_info, "", "LegacyTimedTrigger");
        }
        inline app::LegacyTimedTrigger* create() {
            return il2cpp::create_object<app::LegacyTimedTrigger>(get_class());
        }
    } // namespace LegacyTimedTrigger
} // namespace app::classes::types
