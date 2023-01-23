#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellUIConfirmationOverlay_c__Class.h>
#include <Modloader/app/structs/SpellUIConfirmationOverlay_c.h>

namespace app::classes::types {
    namespace SpellUIConfirmationOverlay_c {
        inline app::SpellUIConfirmationOverlay_c__Class** type_info = (app::SpellUIConfirmationOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x04779B70));
        inline app::SpellUIConfirmationOverlay_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIConfirmationOverlay_c__Class>(type_info, "", "SpellUIConfirmationOverlay", "<>c");
        }
        inline app::SpellUIConfirmationOverlay_c* create() {
            return il2cpp::create_object<app::SpellUIConfirmationOverlay_c>(get_class());
        }
    } // namespace SpellUIConfirmationOverlay_c
} // namespace app::classes::types
