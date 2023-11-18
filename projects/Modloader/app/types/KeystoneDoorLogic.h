#pragma once
#include <Modloader/app/structs/KeystoneDoorLogic.h>
#include <Modloader/app/structs/KeystoneDoorLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeystoneDoorLogic {
        inline app::KeystoneDoorLogic__Class** type_info() {
            static app::KeystoneDoorLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeystoneDoorLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeystoneDoorLogic__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorLogic__Class>(type_info(), "", "KeystoneDoorLogic");
        }
        inline app::KeystoneDoorLogic* create() {
            return il2cpp::create_object<app::KeystoneDoorLogic>(get_class());
        }
    } // namespace KeystoneDoorLogic
} // namespace app::classes::types
