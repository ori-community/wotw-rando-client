#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoDiveAttackBehaviour {
        namespace {
            inline app::SkeetoDiveAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoDiveAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoDiveAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoDiveAttackBehaviour__Class>(type_info, "", "SkeetoDiveAttackBehaviour");
        }
        inline app::SkeetoDiveAttackBehaviour* create() {
            return il2cpp::create_object<app::SkeetoDiveAttackBehaviour>(get_class());
        }
    } // namespace SkeetoDiveAttackBehaviour
} // namespace app::classes::types
