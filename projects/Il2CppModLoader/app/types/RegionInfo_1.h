#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegionInfo_1 {
        namespace {
            app::RegionInfo_1__Class* type_info_ref = nullptr;
        }
        app::RegionInfo_1__Class** type_info = &type_info_ref;
        inline app::RegionInfo_1__Class* get_class() {
            return il2cpp::get_class<app::RegionInfo_1__Class>(type_info, "PlayFab.ClientModels", "RegionInfo");
        }
        inline app::RegionInfo_1* create() {
            return il2cpp::create_object<app::RegionInfo_1>(get_class());
        }
        inline app::RegionInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::RegionInfo_1__Array>(get_class(), size);
        }
    } // namespace RegionInfo_1
} // namespace app::classes::types
