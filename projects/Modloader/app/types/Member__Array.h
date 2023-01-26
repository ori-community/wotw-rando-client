#pragma once
#include <Modloader/app/structs/Member__Array.h>
#include <Modloader/app/structs/Member__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Member__Array {
        inline app::Member__Array__Class** type_info() {
            static app::Member__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Member__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Member__Array__Class* get_class() {
            return il2cpp::get_class<app::Member__Array__Class>(type_info(), "PlayFab.PlayStreamModels", "Member[]");
        }
        inline app::Member__Array* create() {
            return il2cpp::create_object<app::Member__Array>(get_class());
        }
    } // namespace Member__Array
} // namespace app::classes::types
