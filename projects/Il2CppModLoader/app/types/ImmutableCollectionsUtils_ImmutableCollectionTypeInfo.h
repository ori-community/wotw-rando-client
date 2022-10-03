#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ImmutableCollectionsUtils_ImmutableCollectionTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class** type_info;
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class>(type_info, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils", "ImmutableCollectionTypeInfo");
        }
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo* create() {
            return il2cpp::create_object<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>(get_class());
        }
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array>(get_class(), size);
        }
    } // namespace ImmutableCollectionsUtils_ImmutableCollectionTypeInfo
} // namespace app::classes::types
