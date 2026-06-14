#pragma once
#include <Modloader/app/structs/UberTransformFollowRuntimeUpdateSystem.h>
#include <Modloader/app/structs/UberTransformFollowRuntimeUpdateSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberTransformFollowRuntimeUpdateSystem {
        inline app::UberTransformFollowRuntimeUpdateSystem__Class** type_info() {
            static app::UberTransformFollowRuntimeUpdateSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberTransformFollowRuntimeUpdateSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberTransformFollowRuntimeUpdateSystem__Class* get_class() {
            return il2cpp::get_class<app::UberTransformFollowRuntimeUpdateSystem__Class>(type_info(), "", "UberTransformFollowRuntimeUpdateSystem");
        }
        inline app::UberTransformFollowRuntimeUpdateSystem* create() {
            return il2cpp::create_object<app::UberTransformFollowRuntimeUpdateSystem>(get_class());
        }
    } // namespace UberTransformFollowRuntimeUpdateSystem
} // namespace app::classes::types
