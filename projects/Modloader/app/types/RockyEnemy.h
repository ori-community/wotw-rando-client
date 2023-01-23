#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RockyEnemy__Class.h>
#include <Modloader/app/structs/RockyEnemy.h>

namespace app::classes::types {
    namespace RockyEnemy {
        namespace {
            inline app::RockyEnemy__Class* type_info_ref = nullptr;
        }
        inline app::RockyEnemy__Class** type_info = &type_info_ref;
        inline app::RockyEnemy__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemy__Class>(type_info, "", "RockyEnemy");
        }
        inline app::RockyEnemy* create() {
            return il2cpp::create_object<app::RockyEnemy>(get_class());
        }
    } // namespace RockyEnemy
} // namespace app::classes::types
