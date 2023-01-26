#pragma once
#include <Modloader/app/structs/LockInputEntity.h>
#include <Modloader/app/structs/LockInputEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockInputEntity {
        inline app::LockInputEntity__Class** type_info() {
            static app::LockInputEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LockInputEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LockInputEntity__Class* get_class() {
            return il2cpp::get_class<app::LockInputEntity__Class>(type_info(), "Moon.Timeline", "LockInputEntity");
        }
        inline app::LockInputEntity* create() {
            return il2cpp::create_object<app::LockInputEntity>(get_class());
        }
    } // namespace LockInputEntity
} // namespace app::classes::types
