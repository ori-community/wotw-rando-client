#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugVariationEntity {
        namespace {
            app::DropSlugVariationEntity__Class* type_info_ref = nullptr;
        }
        app::DropSlugVariationEntity__Class** type_info = &type_info_ref;
        inline app::DropSlugVariationEntity__Class* get_class() {
            return il2cpp::get_class<app::DropSlugVariationEntity__Class>(type_info, "", "DropSlugVariationEntity");
        }
        inline app::DropSlugVariationEntity* create() {
            return il2cpp::create_object<app::DropSlugVariationEntity>(get_class());
        }
    } // namespace DropSlugVariationEntity
} // namespace app::classes::types
