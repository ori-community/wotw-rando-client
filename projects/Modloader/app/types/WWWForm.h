#pragma once
#include <Modloader/app/structs/WWWForm.h>
#include <Modloader/app/structs/WWWForm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WWWForm {
        inline app::WWWForm__Class** type_info() {
            static app::WWWForm__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WWWForm__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WWWForm__Class* get_class() {
            return il2cpp::get_class<app::WWWForm__Class>(type_info(), "UnityEngine", "WWWForm");
        }
        inline app::WWWForm* create() {
            return il2cpp::create_object<app::WWWForm>(get_class());
        }
    } // namespace WWWForm
} // namespace app::classes::types
