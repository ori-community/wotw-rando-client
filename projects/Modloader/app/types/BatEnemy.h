#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BatEnemy__Class.h>
#include <Modloader/app/structs/BatEnemy.h>

namespace app::classes::types {
    namespace BatEnemy {
        namespace {
            inline app::BatEnemy__Class* type_info_ref = nullptr;
        }
        inline app::BatEnemy__Class** type_info = &type_info_ref;
        inline app::BatEnemy__Class* get_class() {
            return il2cpp::get_class<app::BatEnemy__Class>(type_info, "", "BatEnemy");
        }
        inline app::BatEnemy* create() {
            return il2cpp::create_object<app::BatEnemy>(get_class());
        }
    } // namespace BatEnemy
} // namespace app::classes::types
