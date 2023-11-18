#pragma once
#include <Modloader/app/structs/CageStructureToolCollider.h>
#include <Modloader/app/structs/CageStructureToolCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureToolCollider {
        inline app::CageStructureToolCollider__Class** type_info() {
            static app::CageStructureToolCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageStructureToolCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageStructureToolCollider__Class* get_class() {
            return il2cpp::get_class<app::CageStructureToolCollider__Class>(type_info(), "", "CageStructureToolCollider");
        }
        inline app::CageStructureToolCollider* create() {
            return il2cpp::create_object<app::CageStructureToolCollider>(get_class());
        }
    } // namespace CageStructureToolCollider
} // namespace app::classes::types
