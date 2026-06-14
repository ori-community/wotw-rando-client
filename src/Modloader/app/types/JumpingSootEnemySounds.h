#pragma once
#include <Modloader/app/structs/JumpingSootEnemySounds.h>
#include <Modloader/app/structs/JumpingSootEnemySounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpingSootEnemySounds {
        inline app::JumpingSootEnemySounds__Class** type_info() {
            static app::JumpingSootEnemySounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpingSootEnemySounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpingSootEnemySounds__Class* get_class() {
            return il2cpp::get_class<app::JumpingSootEnemySounds__Class>(type_info(), "", "JumpingSootEnemySounds");
        }
        inline app::JumpingSootEnemySounds* create() {
            return il2cpp::create_object<app::JumpingSootEnemySounds>(get_class());
        }
    } // namespace JumpingSootEnemySounds
} // namespace app::classes::types
