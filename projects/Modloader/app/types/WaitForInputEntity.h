#pragma once
#include <Modloader/app/structs/WaitForInputEntity.h>
#include <Modloader/app/structs/WaitForInputEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForInputEntity {
        inline app::WaitForInputEntity__Class** type_info() {
            static app::WaitForInputEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForInputEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForInputEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForInputEntity__Class>(type_info(), "Moon.Timeline", "WaitForInputEntity");
        }
        inline app::WaitForInputEntity* create() {
            return il2cpp::create_object<app::WaitForInputEntity>(get_class());
        }
    } // namespace WaitForInputEntity
} // namespace app::classes::types
