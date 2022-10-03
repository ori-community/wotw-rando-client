#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildRegionParams__Array {
        namespace {
            app::BuildRegionParams__Array__Class* type_info_ref = nullptr;
        }
        app::BuildRegionParams__Array__Class** type_info = &type_info_ref;
        inline app::BuildRegionParams__Array__Class* get_class() {
            return il2cpp::get_class<app::BuildRegionParams__Array__Class>(type_info, "PlayFab.MultiplayerModels", "BuildRegionParams[]");
        }
        inline app::BuildRegionParams__Array* create() {
            return il2cpp::create_object<app::BuildRegionParams__Array>(get_class());
        }
    } // namespace BuildRegionParams__Array
} // namespace app::classes::types
