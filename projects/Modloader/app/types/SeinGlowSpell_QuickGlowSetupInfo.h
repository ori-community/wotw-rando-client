#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowSetupInfo__Class.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowSetupInfo.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowSetupInfo__Array.h>

namespace app::classes::types {
    namespace SeinGlowSpell_QuickGlowSetupInfo {
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Class** type_info = (app::SeinGlowSpell_QuickGlowSetupInfo__Class**)(modloader::win::memory::resolve_rva(0x04720760));
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_QuickGlowSetupInfo__Class>(type_info, "", "SeinGlowSpell", "QuickGlowSetupInfo");
        }
        inline app::SeinGlowSpell_QuickGlowSetupInfo* create() {
            return il2cpp::create_object<app::SeinGlowSpell_QuickGlowSetupInfo>(get_class());
        }
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinGlowSpell_QuickGlowSetupInfo__Array>(get_class(), size);
        }
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Array* create_array(const std::vector<app::SeinGlowSpell_QuickGlowSetupInfo*>& items) {
            return il2cpp::array_new<app::SeinGlowSpell_QuickGlowSetupInfo__Array>(get_class(), items);
        }
    } // namespace SeinGlowSpell_QuickGlowSetupInfo
} // namespace app::classes::types
