#pragma once
#include <Modloader/app/structs/SkillPointPickup.h>
#include <Modloader/app/structs/SkillPointPickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillPointPickup {
        inline app::SkillPointPickup__Class** type_info() {
            static app::SkillPointPickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkillPointPickup__Class**)(modloader::win::memory::resolve_rva(0x04786F68));
            }
            return cache;
        }
        inline app::SkillPointPickup__Class* get_class() {
            return il2cpp::get_class<app::SkillPointPickup__Class>(type_info(), "", "SkillPointPickup");
        }
        inline app::SkillPointPickup* create() {
            return il2cpp::create_object<app::SkillPointPickup>(get_class());
        }
    } // namespace SkillPointPickup
} // namespace app::classes::types
