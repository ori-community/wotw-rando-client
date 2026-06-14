#pragma once
#include <Modloader/app/structs/DropSlugVariationEntity.h>
#include <Modloader/app/structs/DropSlugVariationEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugVariationEntity {
        inline app::DropSlugVariationEntity__Class** type_info() {
            static app::DropSlugVariationEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugVariationEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugVariationEntity__Class* get_class() {
            return il2cpp::get_class<app::DropSlugVariationEntity__Class>(type_info(), "", "DropSlugVariationEntity");
        }
        inline app::DropSlugVariationEntity* create() {
            return il2cpp::create_object<app::DropSlugVariationEntity>(get_class());
        }
    } // namespace DropSlugVariationEntity
} // namespace app::classes::types
