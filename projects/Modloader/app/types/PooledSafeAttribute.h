#pragma once
#include <Modloader/app/structs/PooledSafeAttribute.h>
#include <Modloader/app/structs/PooledSafeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PooledSafeAttribute {
        inline app::PooledSafeAttribute__Class** type_info() {
            static app::PooledSafeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PooledSafeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PooledSafeAttribute__Class* get_class() {
            return il2cpp::get_class<app::PooledSafeAttribute__Class>(type_info(), "", "PooledSafeAttribute");
        }
        inline app::PooledSafeAttribute* create() {
            return il2cpp::create_object<app::PooledSafeAttribute>(get_class());
        }
    } // namespace PooledSafeAttribute
} // namespace app::classes::types
