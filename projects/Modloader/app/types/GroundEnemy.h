#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundEnemy__Class.h>
#include <Modloader/app/structs/GroundEnemy.h>

namespace app::classes::types {
    namespace GroundEnemy {
        namespace {
            inline app::GroundEnemy__Class* type_info_ref = nullptr;
        }
        inline app::GroundEnemy__Class** type_info = &type_info_ref;
        inline app::GroundEnemy__Class* get_class() {
            return il2cpp::get_class<app::GroundEnemy__Class>(type_info, "", "GroundEnemy");
        }
        inline app::GroundEnemy* create() {
            return il2cpp::create_object<app::GroundEnemy>(get_class());
        }
    } // namespace GroundEnemy
} // namespace app::classes::types
