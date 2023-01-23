#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array__Class.h>
#include <Modloader/app/structs/ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array.h>

namespace app::classes::types {
    namespace ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array {
        namespace {
            inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array__Class** type_info = &type_info_ref;
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array__Class>(type_info, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils+ImmutableCollectionTypeInfo[]");
        }
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array* create() {
            return il2cpp::create_object<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array>(get_class());
        }
    } // namespace ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array
} // namespace app::classes::types
