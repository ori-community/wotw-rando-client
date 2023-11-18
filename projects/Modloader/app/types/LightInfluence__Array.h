#pragma once
#include <Modloader/app/structs/LightInfluence__Array.h>
#include <Modloader/app/structs/LightInfluence__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightInfluence__Array {
        inline app::LightInfluence__Array__Class** type_info() {
            static app::LightInfluence__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightInfluence__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightInfluence__Array__Class* get_class() {
            return il2cpp::get_class<app::LightInfluence__Array__Class>(type_info(), "", "LightInfluence[]");
        }
        inline app::LightInfluence__Array* create() {
            return il2cpp::create_object<app::LightInfluence__Array>(get_class());
        }
    } // namespace LightInfluence__Array
} // namespace app::classes::types
