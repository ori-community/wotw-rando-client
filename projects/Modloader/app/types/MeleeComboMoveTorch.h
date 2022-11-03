#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveTorch {
        inline app::MeleeComboMoveTorch__Class** type_info = (app::MeleeComboMoveTorch__Class**)(modloader::win::memory::resolve_rva(0x0473AE48));
        inline app::MeleeComboMoveTorch__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveTorch__Class>(type_info, "", "MeleeComboMoveTorch");
        }
        inline app::MeleeComboMoveTorch* create() {
            return il2cpp::create_object<app::MeleeComboMoveTorch>(get_class());
        }
    } // namespace MeleeComboMoveTorch
} // namespace app::classes::types
