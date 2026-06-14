#pragma once
#include <Modloader/app/structs/RandomResultTableListing__Array.h>
#include <Modloader/app/structs/RandomResultTableListing__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RandomResultTableListing__Array {
        inline app::RandomResultTableListing__Array__Class** type_info() {
            static app::RandomResultTableListing__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RandomResultTableListing__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RandomResultTableListing__Array__Class* get_class() {
            return il2cpp::get_class<app::RandomResultTableListing__Array__Class>(type_info(), "PlayFab.ServerModels", "RandomResultTableListing[]");
        }
        inline app::RandomResultTableListing__Array* create() {
            return il2cpp::create_object<app::RandomResultTableListing__Array>(get_class());
        }
    } // namespace RandomResultTableListing__Array
} // namespace app::classes::types
