#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwarmNestEntity {
        namespace {
            inline app::SwarmNestEntity__Class* type_info_ref = nullptr;
        }
        inline app::SwarmNestEntity__Class** type_info = &type_info_ref;
        inline app::SwarmNestEntity__Class* get_class() {
            return il2cpp::get_class<app::SwarmNestEntity__Class>(type_info, "", "SwarmNestEntity");
        }
        inline app::SwarmNestEntity* create() {
            return il2cpp::create_object<app::SwarmNestEntity>(get_class());
        }
    } // namespace SwarmNestEntity
} // namespace app::classes::types
