#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssetReferenceParams__Array {
        namespace {
            inline app::AssetReferenceParams__Array__Class* type_info_ref = nullptr;
        }
        inline app::AssetReferenceParams__Array__Class** type_info = &type_info_ref;
        inline app::AssetReferenceParams__Array__Class* get_class() {
            return il2cpp::get_class<app::AssetReferenceParams__Array__Class>(type_info, "PlayFab.MultiplayerModels", "AssetReferenceParams[]");
        }
        inline app::AssetReferenceParams__Array* create() {
            return il2cpp::create_object<app::AssetReferenceParams__Array>(get_class());
        }
    } // namespace AssetReferenceParams__Array
} // namespace app::classes::types
