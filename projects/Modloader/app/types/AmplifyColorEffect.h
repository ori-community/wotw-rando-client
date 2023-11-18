#pragma once
#include <Modloader/app/structs/AmplifyColorEffect.h>
#include <Modloader/app/structs/AmplifyColorEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorEffect {
        inline app::AmplifyColorEffect__Class** type_info() {
            static app::AmplifyColorEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorEffect__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorEffect__Class>(type_info(), "", "AmplifyColorEffect");
        }
        inline app::AmplifyColorEffect* create() {
            return il2cpp::create_object<app::AmplifyColorEffect>(get_class());
        }
    } // namespace AmplifyColorEffect
} // namespace app::classes::types
