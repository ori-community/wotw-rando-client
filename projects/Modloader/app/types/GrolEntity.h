#pragma once
#include <Modloader/app/structs/GrolEntity.h>
#include <Modloader/app/structs/GrolEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrolEntity {
        inline app::GrolEntity__Class** type_info() {
            static app::GrolEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrolEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrolEntity__Class* get_class() {
            return il2cpp::get_class<app::GrolEntity__Class>(type_info(), "", "GrolEntity");
        }
        inline app::GrolEntity* create() {
            return il2cpp::create_object<app::GrolEntity>(get_class());
        }
    } // namespace GrolEntity
} // namespace app::classes::types
