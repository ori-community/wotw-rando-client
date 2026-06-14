#pragma once
#include <Modloader/app/structs/MinerNPCPlaceholder.h>
#include <Modloader/app/structs/MinerNPCPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerNPCPlaceholder {
        inline app::MinerNPCPlaceholder__Class** type_info() {
            static app::MinerNPCPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerNPCPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerNPCPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MinerNPCPlaceholder__Class>(type_info(), "", "MinerNPCPlaceholder");
        }
        inline app::MinerNPCPlaceholder* create() {
            return il2cpp::create_object<app::MinerNPCPlaceholder>(get_class());
        }
    } // namespace MinerNPCPlaceholder
} // namespace app::classes::types
