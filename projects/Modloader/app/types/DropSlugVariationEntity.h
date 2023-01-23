#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DropSlugVariationEntity__Class.h>
#include <Modloader/app/structs/DropSlugVariationEntity.h>

namespace app::classes::types {
    namespace DropSlugVariationEntity {
        namespace {
            inline app::DropSlugVariationEntity__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugVariationEntity__Class** type_info = &type_info_ref;
        inline app::DropSlugVariationEntity__Class* get_class() {
            return il2cpp::get_class<app::DropSlugVariationEntity__Class>(type_info, "", "DropSlugVariationEntity");
        }
        inline app::DropSlugVariationEntity* create() {
            return il2cpp::create_object<app::DropSlugVariationEntity>(get_class());
        }
    } // namespace DropSlugVariationEntity
} // namespace app::classes::types
