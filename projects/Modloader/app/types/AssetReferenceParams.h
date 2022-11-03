#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssetReferenceParams {
        namespace {
            inline app::AssetReferenceParams__Class* type_info_ref = nullptr;
        }
        inline app::AssetReferenceParams__Class** type_info = &type_info_ref;
        inline app::AssetReferenceParams__Class* get_class() {
            return il2cpp::get_class<app::AssetReferenceParams__Class>(type_info, "PlayFab.MultiplayerModels", "AssetReferenceParams");
        }
        inline app::AssetReferenceParams* create() {
            return il2cpp::create_object<app::AssetReferenceParams>(get_class());
        }
        inline app::AssetReferenceParams__Array* create_array(int size) {
            return il2cpp::array_new<app::AssetReferenceParams__Array>(get_class(), size);
        }
        inline app::AssetReferenceParams__Array* create_array(const std::vector<app::AssetReferenceParams*>& items) {
            return il2cpp::array_new<app::AssetReferenceParams__Array>(get_class(), items);
        }
    } // namespace AssetReferenceParams
} // namespace app::classes::types
