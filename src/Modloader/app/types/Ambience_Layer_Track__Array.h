#pragma once
#include <Modloader/app/structs/Ambience_Layer_Track__Array.h>
#include <Modloader/app/structs/Ambience_Layer_Track__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ambience_Layer_Track__Array {
        inline app::Ambience_Layer_Track__Array__Class** type_info() {
            static app::Ambience_Layer_Track__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ambience_Layer_Track__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ambience_Layer_Track__Array__Class* get_class() {
            return il2cpp::get_class<app::Ambience_Layer_Track__Array__Class>(type_info(), "Core", "Ambience+Layer+Track[]");
        }
        inline app::Ambience_Layer_Track__Array* create() {
            return il2cpp::create_object<app::Ambience_Layer_Track__Array>(get_class());
        }
    } // namespace Ambience_Layer_Track__Array
} // namespace app::classes::types
