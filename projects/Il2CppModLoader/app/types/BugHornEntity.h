#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BugHornEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BugHornEntity__Class** type_info;
        inline app::BugHornEntity__Class* get_class() {
            return il2cpp::get_class<app::BugHornEntity__Class>(type_info, "", "BugHornEntity");
        }
        inline app::BugHornEntity* create() {
            return il2cpp::create_object<app::BugHornEntity>(get_class());
        }
    } // namespace BugHornEntity
} // namespace app::classes::types
