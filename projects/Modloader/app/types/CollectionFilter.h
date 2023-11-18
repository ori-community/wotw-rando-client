#pragma once
#include <Modloader/app/structs/CollectionFilter.h>
#include <Modloader/app/structs/CollectionFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollectionFilter {
        inline app::CollectionFilter__Class** type_info() {
            static app::CollectionFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollectionFilter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollectionFilter__Class* get_class() {
            return il2cpp::get_class<app::CollectionFilter__Class>(type_info(), "PlayFab.ClientModels", "CollectionFilter");
        }
        inline app::CollectionFilter* create() {
            return il2cpp::create_object<app::CollectionFilter>(get_class());
        }
    } // namespace CollectionFilter
} // namespace app::classes::types
