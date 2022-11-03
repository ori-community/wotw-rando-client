#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordstaff_DummyHitStop_d_86 {
        inline app::MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class** type_info = (app::MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class**)(modloader::win::memory::resolve_rva(0x0471DDD8));
        inline app::MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class>(type_info, "", "MeleeComboMoveSwordstaff", "<DummyHitStop>d__86");
        }
        inline app::MeleeComboMoveSwordstaff_DummyHitStop_d_86* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordstaff_DummyHitStop_d_86>(get_class());
        }
    } // namespace MeleeComboMoveSwordstaff_DummyHitStop_d_86
} // namespace app::classes::types
