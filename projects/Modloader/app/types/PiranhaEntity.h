#pragma once
#include <Modloader/app/structs/PiranhaEntity.h>
#include <Modloader/app/structs/PiranhaEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaEntity {
        inline app::PiranhaEntity__Class** type_info() {
            static app::PiranhaEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaEntity__Class* get_class() {
            return il2cpp::get_class<app::PiranhaEntity__Class>(type_info(), "", "PiranhaEntity");
        }
        inline app::PiranhaEntity* create() {
            return il2cpp::create_object<app::PiranhaEntity>(get_class());
        }
    } // namespace PiranhaEntity
} // namespace app::classes::types
