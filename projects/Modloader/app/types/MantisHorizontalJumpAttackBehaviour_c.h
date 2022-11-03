#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisHorizontalJumpAttackBehaviour_c {
        inline app::MantisHorizontalJumpAttackBehaviour_c__Class** type_info = (app::MantisHorizontalJumpAttackBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0478B118));
        inline app::MantisHorizontalJumpAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisHorizontalJumpAttackBehaviour_c__Class>(type_info, "", "MantisHorizontalJumpAttackBehaviour", "<>c");
        }
        inline app::MantisHorizontalJumpAttackBehaviour_c* create() {
            return il2cpp::create_object<app::MantisHorizontalJumpAttackBehaviour_c>(get_class());
        }
    } // namespace MantisHorizontalJumpAttackBehaviour_c
} // namespace app::classes::types
