#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate {
        inline app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class** type_info = (app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class**)(modloader::win::memory::resolve_rva(0x04795750));
        inline app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class>(type_info, "", "KwolokBossEntity", "ModifyLookAngleChangeSpeedDelegate");
        }
        inline app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate
} // namespace app::classes::types
