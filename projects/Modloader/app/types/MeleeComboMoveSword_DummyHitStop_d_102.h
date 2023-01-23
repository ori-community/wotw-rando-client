#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeleeComboMoveSword_DummyHitStop_d_102__Class.h>
#include <Modloader/app/structs/MeleeComboMoveSword_DummyHitStop_d_102.h>

namespace app::classes::types {
    namespace MeleeComboMoveSword_DummyHitStop_d_102 {
        inline app::MeleeComboMoveSword_DummyHitStop_d_102__Class** type_info = (app::MeleeComboMoveSword_DummyHitStop_d_102__Class**)(modloader::win::memory::resolve_rva(0x0470CF98));
        inline app::MeleeComboMoveSword_DummyHitStop_d_102__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveSword_DummyHitStop_d_102__Class>(type_info, "", "MeleeComboMoveSword", "<DummyHitStop>d__102");
        }
        inline app::MeleeComboMoveSword_DummyHitStop_d_102* create() {
            return il2cpp::create_object<app::MeleeComboMoveSword_DummyHitStop_d_102>(get_class());
        }
    } // namespace MeleeComboMoveSword_DummyHitStop_d_102
} // namespace app::classes::types
