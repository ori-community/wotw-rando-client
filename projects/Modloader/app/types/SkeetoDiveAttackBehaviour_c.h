#pragma once
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour_c.h>
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoDiveAttackBehaviour_c {
        inline app::SkeetoDiveAttackBehaviour_c__Class** type_info() {
            static app::SkeetoDiveAttackBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoDiveAttackBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04786638));
            }
            return cache;
        }
        inline app::SkeetoDiveAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoDiveAttackBehaviour_c__Class>(type_info(), "", "SkeetoDiveAttackBehaviour", "<>c");
        }
        inline app::SkeetoDiveAttackBehaviour_c* create() {
            return il2cpp::create_object<app::SkeetoDiveAttackBehaviour_c>(get_class());
        }
    } // namespace SkeetoDiveAttackBehaviour_c
} // namespace app::classes::types
