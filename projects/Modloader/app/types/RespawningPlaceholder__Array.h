#pragma once
#include <Modloader/app/structs/RespawningPlaceholder__Array.h>
#include <Modloader/app/structs/RespawningPlaceholder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RespawningPlaceholder__Array {
        inline app::RespawningPlaceholder__Array__Class** type_info() {
            static app::RespawningPlaceholder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RespawningPlaceholder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RespawningPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::RespawningPlaceholder__Array__Class>(type_info(), "", "RespawningPlaceholder[]");
        }
        inline app::RespawningPlaceholder__Array* create() {
            return il2cpp::create_object<app::RespawningPlaceholder__Array>(get_class());
        }
    } // namespace RespawningPlaceholder__Array
} // namespace app::classes::types
