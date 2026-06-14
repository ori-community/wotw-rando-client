#pragma once
#include <Modloader/app/structs/Twirl.h>
#include <Modloader/app/structs/Twirl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Twirl {
        inline app::Twirl__Class** type_info() {
            static app::Twirl__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Twirl__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Twirl__Class* get_class() {
            return il2cpp::get_class<app::Twirl__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Twirl");
        }
        inline app::Twirl* create() {
            return il2cpp::create_object<app::Twirl>(get_class());
        }
    } // namespace Twirl
} // namespace app::classes::types
