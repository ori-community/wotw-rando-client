#pragma once
#include <Modloader/app/structs/RegionInfo_1__Array.h>
#include <Modloader/app/structs/RegionInfo_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegionInfo_1__Array {
        inline app::RegionInfo_1__Array__Class** type_info() {
            static app::RegionInfo_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RegionInfo_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RegionInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::RegionInfo_1__Array__Class>(type_info(), "PlayFab.ClientModels", "RegionInfo[]");
        }
        inline app::RegionInfo_1__Array* create() {
            return il2cpp::create_object<app::RegionInfo_1__Array>(get_class());
        }
    } // namespace RegionInfo_1__Array
} // namespace app::classes::types
