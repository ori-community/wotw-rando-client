#pragma once
#include <Modloader/app/structs/IKTargetBehaviour.h>
#include <Modloader/app/structs/IKTargetBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKTargetBehaviour {
        inline app::IKTargetBehaviour__Class** type_info() {
            static app::IKTargetBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKTargetBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKTargetBehaviour__Class* get_class() {
            return il2cpp::get_class<app::IKTargetBehaviour__Class>(type_info(), "Moon", "IKTargetBehaviour");
        }
        inline app::IKTargetBehaviour* create() {
            return il2cpp::create_object<app::IKTargetBehaviour>(get_class());
        }
    } // namespace IKTargetBehaviour
} // namespace app::classes::types
