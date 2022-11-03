#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellPickup_c {
        inline app::SpellPickup_c__Class** type_info = (app::SpellPickup_c__Class**)(modloader::win::memory::resolve_rva(0x04741E38));
        inline app::SpellPickup_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellPickup_c__Class>(type_info, "", "SpellPickup", "<>c");
        }
        inline app::SpellPickup_c* create() {
            return il2cpp::create_object<app::SpellPickup_c>(get_class());
        }
    } // namespace SpellPickup_c
} // namespace app::classes::types
