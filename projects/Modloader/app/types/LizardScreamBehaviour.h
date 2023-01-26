#pragma once
#include <Modloader/app/structs/LizardScreamBehaviour.h>
#include <Modloader/app/structs/LizardScreamBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardScreamBehaviour {
        inline app::LizardScreamBehaviour__Class** type_info() {
            static app::LizardScreamBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardScreamBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardScreamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardScreamBehaviour__Class>(type_info(), "", "LizardScreamBehaviour");
        }
        inline app::LizardScreamBehaviour* create() {
            return il2cpp::create_object<app::LizardScreamBehaviour>(get_class());
        }
    } // namespace LizardScreamBehaviour
} // namespace app::classes::types
