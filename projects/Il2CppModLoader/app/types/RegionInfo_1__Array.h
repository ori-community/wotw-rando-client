#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegionInfo_1__Array {
        namespace {
            app::RegionInfo_1__Array__Class* type_info_ref = nullptr;
        }
        app::RegionInfo_1__Array__Class** type_info = &type_info_ref;
        inline app::RegionInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::RegionInfo_1__Array__Class>(type_info, "PlayFab.ClientModels", "RegionInfo[]");
        }
        inline app::RegionInfo_1__Array* create() {
            return il2cpp::create_object<app::RegionInfo_1__Array>(get_class());
        }
    } // namespace RegionInfo_1__Array
} // namespace app::classes::types
