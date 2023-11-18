#pragma once
#include <Modloader/app/structs/IcyFeralMinerPlaceholder.h>
#include <Modloader/app/structs/IcyFeralMinerPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IcyFeralMinerPlaceholder {
        inline app::IcyFeralMinerPlaceholder__Class** type_info() {
            static app::IcyFeralMinerPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IcyFeralMinerPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IcyFeralMinerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::IcyFeralMinerPlaceholder__Class>(type_info(), "", "IcyFeralMinerPlaceholder");
        }
        inline app::IcyFeralMinerPlaceholder* create() {
            return il2cpp::create_object<app::IcyFeralMinerPlaceholder>(get_class());
        }
    } // namespace IcyFeralMinerPlaceholder
} // namespace app::classes::types
