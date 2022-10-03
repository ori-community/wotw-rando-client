#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LockInputEntity {
        namespace {
            app::LockInputEntity__Class* type_info_ref = nullptr;
        }
        app::LockInputEntity__Class** type_info = &type_info_ref;
        inline app::LockInputEntity__Class* get_class() {
            return il2cpp::get_class<app::LockInputEntity__Class>(type_info, "Moon.Timeline", "LockInputEntity");
        }
        inline app::LockInputEntity* create() {
            return il2cpp::create_object<app::LockInputEntity>(get_class());
        }
    } // namespace LockInputEntity
} // namespace app::classes::types
