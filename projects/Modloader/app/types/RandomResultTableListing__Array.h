#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RandomResultTableListing__Array__Class.h>
#include <Modloader/app/structs/RandomResultTableListing__Array.h>

namespace app::classes::types {
    namespace RandomResultTableListing__Array {
        namespace {
            inline app::RandomResultTableListing__Array__Class* type_info_ref = nullptr;
        }
        inline app::RandomResultTableListing__Array__Class** type_info = &type_info_ref;
        inline app::RandomResultTableListing__Array__Class* get_class() {
            return il2cpp::get_class<app::RandomResultTableListing__Array__Class>(type_info, "PlayFab.ServerModels", "RandomResultTableListing[]");
        }
        inline app::RandomResultTableListing__Array* create() {
            return il2cpp::create_object<app::RandomResultTableListing__Array>(get_class());
        }
    } // namespace RandomResultTableListing__Array
} // namespace app::classes::types
