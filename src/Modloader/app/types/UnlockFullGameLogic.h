#pragma once
#include <Modloader/app/structs/UnlockFullGameLogic.h>
#include <Modloader/app/structs/UnlockFullGameLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlockFullGameLogic {
        inline app::UnlockFullGameLogic__Class** type_info() {
            static app::UnlockFullGameLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnlockFullGameLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnlockFullGameLogic__Class* get_class() {
            return il2cpp::get_class<app::UnlockFullGameLogic__Class>(type_info(), "", "UnlockFullGameLogic");
        }
        inline app::UnlockFullGameLogic* create() {
            return il2cpp::create_object<app::UnlockFullGameLogic>(get_class());
        }
    } // namespace UnlockFullGameLogic
} // namespace app::classes::types
