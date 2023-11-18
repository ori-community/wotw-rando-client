#pragma once
#include <Modloader/app/structs/MantisJumpAttackBehaviour_c.h>
#include <Modloader/app/structs/MantisJumpAttackBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisJumpAttackBehaviour_c {
        inline app::MantisJumpAttackBehaviour_c__Class** type_info() {
            static app::MantisJumpAttackBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MantisJumpAttackBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047165B8));
            }
            return cache;
        }
        inline app::MantisJumpAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisJumpAttackBehaviour_c__Class>(type_info(), "", "MantisJumpAttackBehaviour", "<>c");
        }
        inline app::MantisJumpAttackBehaviour_c* create() {
            return il2cpp::create_object<app::MantisJumpAttackBehaviour_c>(get_class());
        }
    } // namespace MantisJumpAttackBehaviour_c
} // namespace app::classes::types
