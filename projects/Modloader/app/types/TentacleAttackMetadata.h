#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleAttackMetadata__Class.h>
#include <Modloader/app/structs/TentacleAttackMetadata.h>

namespace app::classes::types {
    namespace TentacleAttackMetadata {
        namespace {
            inline app::TentacleAttackMetadata__Class* type_info_ref = nullptr;
        }
        inline app::TentacleAttackMetadata__Class** type_info = &type_info_ref;
        inline app::TentacleAttackMetadata__Class* get_class() {
            return il2cpp::get_class<app::TentacleAttackMetadata__Class>(type_info, "Moon", "TentacleAttackMetadata");
        }
        inline app::TentacleAttackMetadata* create() {
            return il2cpp::create_object<app::TentacleAttackMetadata>(get_class());
        }
    } // namespace TentacleAttackMetadata
} // namespace app::classes::types
