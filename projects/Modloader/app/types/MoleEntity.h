#pragma once
#include <Modloader/app/structs/MoleEntity.h>
#include <Modloader/app/structs/MoleEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoleEntity {
        inline app::MoleEntity__Class** type_info() {
            static app::MoleEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoleEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoleEntity__Class* get_class() {
            return il2cpp::get_class<app::MoleEntity__Class>(type_info(), "", "MoleEntity");
        }
        inline app::MoleEntity* create() {
            return il2cpp::create_object<app::MoleEntity>(get_class());
        }
    } // namespace MoleEntity
} // namespace app::classes::types
