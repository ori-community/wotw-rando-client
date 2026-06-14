#pragma once
#include <Modloader/app/structs/CacheBaseAnimatorAction.h>
#include <Modloader/app/structs/CacheBaseAnimatorAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CacheBaseAnimatorAction {
        inline app::CacheBaseAnimatorAction__Class** type_info() {
            static app::CacheBaseAnimatorAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CacheBaseAnimatorAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CacheBaseAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::CacheBaseAnimatorAction__Class>(type_info(), "", "CacheBaseAnimatorAction");
        }
        inline app::CacheBaseAnimatorAction* create() {
            return il2cpp::create_object<app::CacheBaseAnimatorAction>(get_class());
        }
    } // namespace CacheBaseAnimatorAction
} // namespace app::classes::types
