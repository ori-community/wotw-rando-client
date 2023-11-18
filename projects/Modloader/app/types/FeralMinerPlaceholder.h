#pragma once
#include <Modloader/app/structs/FeralMinerPlaceholder.h>
#include <Modloader/app/structs/FeralMinerPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeralMinerPlaceholder {
        inline app::FeralMinerPlaceholder__Class** type_info() {
            static app::FeralMinerPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeralMinerPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeralMinerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::FeralMinerPlaceholder__Class>(type_info(), "", "FeralMinerPlaceholder");
        }
        inline app::FeralMinerPlaceholder* create() {
            return il2cpp::create_object<app::FeralMinerPlaceholder>(get_class());
        }
    } // namespace FeralMinerPlaceholder
} // namespace app::classes::types
