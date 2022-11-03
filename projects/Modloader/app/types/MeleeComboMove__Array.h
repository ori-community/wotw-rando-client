#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMove__Array {
        namespace {
            inline app::MeleeComboMove__Array__Class* type_info_ref = nullptr;
        }
        inline app::MeleeComboMove__Array__Class** type_info = &type_info_ref;
        inline app::MeleeComboMove__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMove__Array__Class>(type_info, "", "MeleeComboMove[]");
        }
        inline app::MeleeComboMove__Array* create() {
            return il2cpp::create_object<app::MeleeComboMove__Array>(get_class());
        }
    } // namespace MeleeComboMove__Array
} // namespace app::classes::types
