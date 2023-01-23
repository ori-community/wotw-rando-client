#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DeadBatEnemy__Class.h>
#include <Modloader/app/structs/DeadBatEnemy.h>

namespace app::classes::types {
    namespace DeadBatEnemy {
        namespace {
            inline app::DeadBatEnemy__Class* type_info_ref = nullptr;
        }
        inline app::DeadBatEnemy__Class** type_info = &type_info_ref;
        inline app::DeadBatEnemy__Class* get_class() {
            return il2cpp::get_class<app::DeadBatEnemy__Class>(type_info, "", "DeadBatEnemy");
        }
        inline app::DeadBatEnemy* create() {
            return il2cpp::create_object<app::DeadBatEnemy>(get_class());
        }
    } // namespace DeadBatEnemy
} // namespace app::classes::types
