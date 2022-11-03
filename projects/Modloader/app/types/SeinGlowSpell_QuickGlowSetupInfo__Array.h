#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGlowSpell_QuickGlowSetupInfo__Array {
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Array__Class** type_info = (app::SeinGlowSpell_QuickGlowSetupInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04766758));
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinGlowSpell_QuickGlowSetupInfo__Array__Class>(type_info, "", "SeinGlowSpell+QuickGlowSetupInfo[]");
        }
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Array* create() {
            return il2cpp::create_object<app::SeinGlowSpell_QuickGlowSetupInfo__Array>(get_class());
        }
    } // namespace SeinGlowSpell_QuickGlowSetupInfo__Array
} // namespace app::classes::types
