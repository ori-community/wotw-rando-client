#pragma once
#include <Modloader/app/structs/MeleeComboMoveSwordstaff_DummyHitStop_d_86.h>
#include <Modloader/app/structs/MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordstaff_DummyHitStop_d_86 {
        inline app::MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class** type_info() {
            static app::MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class**)(modloader::win::memory::resolve_rva(0x0471DDD8));
            }
            return cache;
        }
        inline app::MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveSwordstaff_DummyHitStop_d_86__Class>(type_info(), "", "MeleeComboMoveSwordstaff", "<DummyHitStop>d__86");
        }
        inline app::MeleeComboMoveSwordstaff_DummyHitStop_d_86* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordstaff_DummyHitStop_d_86>(get_class());
        }
    } // namespace MeleeComboMoveSwordstaff_DummyHitStop_d_86
} // namespace app::classes::types
