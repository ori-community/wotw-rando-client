#pragma once
#include <Modloader/app/structs/DisableTargetForSeconds.h>
#include <Modloader/app/structs/DisableTargetForSeconds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisableTargetForSeconds {
        inline app::DisableTargetForSeconds__Class** type_info() {
            static app::DisableTargetForSeconds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisableTargetForSeconds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisableTargetForSeconds__Class* get_class() {
            return il2cpp::get_class<app::DisableTargetForSeconds__Class>(type_info(), "", "DisableTargetForSeconds");
        }
        inline app::DisableTargetForSeconds* create() {
            return il2cpp::create_object<app::DisableTargetForSeconds>(get_class());
        }
    } // namespace DisableTargetForSeconds
} // namespace app::classes::types
