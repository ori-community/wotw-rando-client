#pragma once
#include <Modloader/app/structs/CorruptMinerPlaceholder.h>
#include <Modloader/app/structs/CorruptMinerPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CorruptMinerPlaceholder {
        inline app::CorruptMinerPlaceholder__Class** type_info() {
            static app::CorruptMinerPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CorruptMinerPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CorruptMinerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CorruptMinerPlaceholder__Class>(type_info(), "", "CorruptMinerPlaceholder");
        }
        inline app::CorruptMinerPlaceholder* create() {
            return il2cpp::create_object<app::CorruptMinerPlaceholder>(get_class());
        }
    } // namespace CorruptMinerPlaceholder
} // namespace app::classes::types
