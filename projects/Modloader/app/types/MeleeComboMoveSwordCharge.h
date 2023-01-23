#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeleeComboMoveSwordCharge__Class.h>
#include <Modloader/app/structs/MeleeComboMoveSwordCharge.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordCharge {
        inline app::MeleeComboMoveSwordCharge__Class** type_info = (app::MeleeComboMoveSwordCharge__Class**)(modloader::win::memory::resolve_rva(0x04703F28));
        inline app::MeleeComboMoveSwordCharge__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSwordCharge__Class>(type_info, "Moon", "MeleeComboMoveSwordCharge");
        }
        inline app::MeleeComboMoveSwordCharge* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordCharge>(get_class());
        }
    } // namespace MeleeComboMoveSwordCharge
} // namespace app::classes::types
