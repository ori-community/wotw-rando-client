#pragma once
#include <Modloader/app/structs/ObjectResult__Array.h>
#include <Modloader/app/structs/ObjectResult__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectResult__Array {
        inline app::ObjectResult__Array__Class** type_info() {
            static app::ObjectResult__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectResult__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectResult__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectResult__Array__Class>(type_info(), "PlayFab.DataModels", "ObjectResult[]");
        }
        inline app::ObjectResult__Array* create() {
            return il2cpp::create_object<app::ObjectResult__Array>(get_class());
        }
    } // namespace ObjectResult__Array
} // namespace app::classes::types
