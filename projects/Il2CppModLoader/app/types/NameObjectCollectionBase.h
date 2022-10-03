#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameObjectCollectionBase__Class** type_info;
        inline app::NameObjectCollectionBase__Class* get_class() {
            return il2cpp::get_class<app::NameObjectCollectionBase__Class>(type_info, "System.Collections.Specialized", "NameObjectCollectionBase");
        }
        inline app::NameObjectCollectionBase* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase>(get_class());
        }
    } // namespace NameObjectCollectionBase
} // namespace app::classes::types
