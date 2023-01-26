#pragma once
#include <Modloader/app/structs/SpiritShardIcons.h>
#include <Modloader/app/structs/SpiritShardIcons__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIcons {
        inline app::SpiritShardIcons__Class** type_info() {
            static app::SpiritShardIcons__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardIcons__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardIcons__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIcons__Class>(type_info(), "", "SpiritShardIcons");
        }
        inline app::SpiritShardIcons* create() {
            return il2cpp::create_object<app::SpiritShardIcons>(get_class());
        }
    } // namespace SpiritShardIcons
} // namespace app::classes::types
