#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum {
        namespace {
            inline app::KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class** type_info = &type_info_ref;
        inline app::KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class>(type_info, "", "KamikazeSkeetoDiveAttackBehaviour", "DiveAttackState");
        }
        inline app::KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum* create() {
            return il2cpp::create_object<app::KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum>(get_class());
        }
    } // namespace KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum
} // namespace app::classes::types
