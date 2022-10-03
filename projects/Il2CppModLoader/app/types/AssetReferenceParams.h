#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetReferenceParams {
        namespace {
            app::AssetReferenceParams__Class* type_info_ref = nullptr;
        }
        app::AssetReferenceParams__Class** type_info = &type_info_ref;
        inline app::AssetReferenceParams__Class* get_class() {
            return il2cpp::get_class<app::AssetReferenceParams__Class>(type_info, "PlayFab.MultiplayerModels", "AssetReferenceParams");
        }
        inline app::AssetReferenceParams* create() {
            return il2cpp::create_object<app::AssetReferenceParams>(get_class());
        }
        inline app::AssetReferenceParams__Array* create_array(int size) {
            return il2cpp::array_new<app::AssetReferenceParams__Array>(get_class(), size);
        }
    } // namespace AssetReferenceParams
} // namespace app::classes::types
