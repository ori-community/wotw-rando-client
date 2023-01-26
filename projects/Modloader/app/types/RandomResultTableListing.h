#pragma once
#include <Modloader/app/structs/RandomResultTableListing.h>
#include <Modloader/app/structs/RandomResultTableListing__Array.h>
#include <Modloader/app/structs/RandomResultTableListing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RandomResultTableListing {
        inline app::RandomResultTableListing__Class** type_info() {
            static app::RandomResultTableListing__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RandomResultTableListing__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RandomResultTableListing__Class* get_class() {
            return il2cpp::get_class<app::RandomResultTableListing__Class>(type_info(), "PlayFab.ServerModels", "RandomResultTableListing");
        }
        inline app::RandomResultTableListing* create() {
            return il2cpp::create_object<app::RandomResultTableListing>(get_class());
        }
        inline app::RandomResultTableListing__Array* create_array(int size) {
            return il2cpp::array_new<app::RandomResultTableListing__Array>(get_class(), size);
        }
        inline app::RandomResultTableListing__Array* create_array(const std::vector<app::RandomResultTableListing*>& items) {
            return il2cpp::array_new<app::RandomResultTableListing__Array>(get_class(), items);
        }
    } // namespace RandomResultTableListing
} // namespace app::classes::types
