#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrabSpinLoopAttackBehaviour {
        namespace {
            inline app::CrabSpinLoopAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::CrabSpinLoopAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::CrabSpinLoopAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabSpinLoopAttackBehaviour__Class>(type_info, "Moon", "CrabSpinLoopAttackBehaviour");
        }
        inline app::CrabSpinLoopAttackBehaviour* create() {
            return il2cpp::create_object<app::CrabSpinLoopAttackBehaviour>(get_class());
        }
    } // namespace CrabSpinLoopAttackBehaviour
} // namespace app::classes::types
