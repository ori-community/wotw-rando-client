#pragma once
#include <Modloader/app/structs/CrazyMinerEntity.h>
#include <Modloader/app/structs/CrazyMinerEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrazyMinerEntity {
        inline app::CrazyMinerEntity__Class** type_info() {
            static app::CrazyMinerEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrazyMinerEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrazyMinerEntity__Class* get_class() {
            return il2cpp::get_class<app::CrazyMinerEntity__Class>(type_info(), "", "CrazyMinerEntity");
        }
        inline app::CrazyMinerEntity* create() {
            return il2cpp::create_object<app::CrazyMinerEntity>(get_class());
        }
    } // namespace CrazyMinerEntity
} // namespace app::classes::types
