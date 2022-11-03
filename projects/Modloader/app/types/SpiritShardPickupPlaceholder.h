#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardPickupPlaceholder {
        namespace {
            inline app::SpiritShardPickupPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardPickupPlaceholder__Class** type_info = &type_info_ref;
        inline app::SpiritShardPickupPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardPickupPlaceholder__Class>(type_info, "", "SpiritShardPickupPlaceholder");
        }
        inline app::SpiritShardPickupPlaceholder* create() {
            return il2cpp::create_object<app::SpiritShardPickupPlaceholder>(get_class());
        }
    } // namespace SpiritShardPickupPlaceholder
} // namespace app::classes::types
