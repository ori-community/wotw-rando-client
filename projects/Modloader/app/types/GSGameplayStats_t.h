#pragma once
#include <Modloader/app/structs/GSGameplayStats_t.h>
#include <Modloader/app/structs/GSGameplayStats_t__Boxed.h>
#include <Modloader/app/structs/GSGameplayStats_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GSGameplayStats_t {
        inline app::GSGameplayStats_t__Class** type_info() {
            static app::GSGameplayStats_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GSGameplayStats_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GSGameplayStats_t__Class* get_class() {
            return il2cpp::get_class<app::GSGameplayStats_t__Class>(type_info(), "Steamworks", "GSGameplayStats_t");
        }
        inline app::GSGameplayStats_t* create() {
            return il2cpp::create_object<app::GSGameplayStats_t>(get_class());
        }
        inline app::GSGameplayStats_t__Boxed* box(app::GSGameplayStats_t value) {
            return il2cpp::box_value<app::GSGameplayStats_t__Boxed>(get_class(), value);
        }
    } // namespace GSGameplayStats_t
} // namespace app::classes::types
