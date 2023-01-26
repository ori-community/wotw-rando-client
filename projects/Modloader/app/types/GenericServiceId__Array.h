#pragma once
#include <Modloader/app/structs/GenericServiceId__Array.h>
#include <Modloader/app/structs/GenericServiceId__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericServiceId__Array {
        inline app::GenericServiceId__Array__Class** type_info() {
            static app::GenericServiceId__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericServiceId__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericServiceId__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericServiceId__Array__Class>(type_info(), "PlayFab.ClientModels", "GenericServiceId[]");
        }
        inline app::GenericServiceId__Array* create() {
            return il2cpp::create_object<app::GenericServiceId__Array>(get_class());
        }
    } // namespace GenericServiceId__Array
} // namespace app::classes::types
