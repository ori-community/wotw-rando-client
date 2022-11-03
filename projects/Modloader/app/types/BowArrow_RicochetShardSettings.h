#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BowArrow_RicochetShardSettings {
        namespace {
            inline app::BowArrow_RicochetShardSettings__Class* type_info_ref = nullptr;
        }
        inline app::BowArrow_RicochetShardSettings__Class** type_info = &type_info_ref;
        inline app::BowArrow_RicochetShardSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BowArrow_RicochetShardSettings__Class>(type_info, "", "BowArrow", "RicochetShardSettings");
        }
        inline app::BowArrow_RicochetShardSettings* create() {
            return il2cpp::create_object<app::BowArrow_RicochetShardSettings>(get_class());
        }
        inline app::BowArrow_RicochetShardSettings__Boxed* box(app::BowArrow_RicochetShardSettings value) {
            return il2cpp::box_value<app::BowArrow_RicochetShardSettings__Boxed>(get_class(), value);
        }
    } // namespace BowArrow_RicochetShardSettings
} // namespace app::classes::types
