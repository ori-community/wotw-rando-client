#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISpiritFlameAttackable__Array {
        namespace {
            inline app::ISpiritFlameAttackable__Array__Class* type_info_ref = nullptr;
        }
        inline app::ISpiritFlameAttackable__Array__Class** type_info = &type_info_ref;
        inline app::ISpiritFlameAttackable__Array__Class* get_class() {
            return il2cpp::get_class<app::ISpiritFlameAttackable__Array__Class>(type_info, "", "ISpiritFlameAttackable[]");
        }
        inline app::ISpiritFlameAttackable__Array* create() {
            return il2cpp::create_object<app::ISpiritFlameAttackable__Array>(get_class());
        }
    } // namespace ISpiritFlameAttackable__Array
} // namespace app::classes::types
