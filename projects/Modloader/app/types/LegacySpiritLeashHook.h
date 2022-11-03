#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySpiritLeashHook {
        namespace {
            inline app::LegacySpiritLeashHook__Class* type_info_ref = nullptr;
        }
        inline app::LegacySpiritLeashHook__Class** type_info = &type_info_ref;
        inline app::LegacySpiritLeashHook__Class* get_class() {
            return il2cpp::get_class<app::LegacySpiritLeashHook__Class>(type_info, "", "LegacySpiritLeashHook");
        }
        inline app::LegacySpiritLeashHook* create() {
            return il2cpp::create_object<app::LegacySpiritLeashHook>(get_class());
        }
    } // namespace LegacySpiritLeashHook
} // namespace app::classes::types
