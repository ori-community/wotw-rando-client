#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleAttackMetadata {
        namespace {
            app::TentacleAttackMetadata__Class* type_info_ref = nullptr;
        }
        app::TentacleAttackMetadata__Class** type_info = &type_info_ref;
        inline app::TentacleAttackMetadata__Class* get_class() {
            return il2cpp::get_class<app::TentacleAttackMetadata__Class>(type_info, "Moon", "TentacleAttackMetadata");
        }
        inline app::TentacleAttackMetadata* create() {
            return il2cpp::create_object<app::TentacleAttackMetadata>(get_class());
        }
    } // namespace TentacleAttackMetadata
} // namespace app::classes::types
