#pragma once
#include <Modloader/app/structs/CrazyMinerPlaceholder.h>
#include <Modloader/app/structs/CrazyMinerPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrazyMinerPlaceholder {
        inline app::CrazyMinerPlaceholder__Class** type_info() {
            static app::CrazyMinerPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrazyMinerPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrazyMinerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CrazyMinerPlaceholder__Class>(type_info(), "", "CrazyMinerPlaceholder");
        }
        inline app::CrazyMinerPlaceholder* create() {
            return il2cpp::create_object<app::CrazyMinerPlaceholder>(get_class());
        }
    } // namespace CrazyMinerPlaceholder
} // namespace app::classes::types
