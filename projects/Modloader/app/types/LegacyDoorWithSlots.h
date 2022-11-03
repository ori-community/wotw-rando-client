#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyDoorWithSlots {
        namespace {
            inline app::LegacyDoorWithSlots__Class* type_info_ref = nullptr;
        }
        inline app::LegacyDoorWithSlots__Class** type_info = &type_info_ref;
        inline app::LegacyDoorWithSlots__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoorWithSlots__Class>(type_info, "", "LegacyDoorWithSlots");
        }
        inline app::LegacyDoorWithSlots* create() {
            return il2cpp::create_object<app::LegacyDoorWithSlots>(get_class());
        }
    } // namespace LegacyDoorWithSlots
} // namespace app::classes::types
