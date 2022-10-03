#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalDataCollectionBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalDataCollectionBase__Class** type_info;
        inline app::InternalDataCollectionBase__Class* get_class() {
            return il2cpp::get_class<app::InternalDataCollectionBase__Class>(type_info, "System.Data", "InternalDataCollectionBase");
        }
        inline app::InternalDataCollectionBase* create() {
            return il2cpp::create_object<app::InternalDataCollectionBase>(get_class());
        }
    } // namespace InternalDataCollectionBase
} // namespace app::classes::types
