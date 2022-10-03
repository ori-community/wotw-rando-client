#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsCyclicReferenceManager_ObjectReferenceEqualityComparator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class** type_info;
        inline app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class* get_class() {
            return il2cpp::get_nested_class<app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class>(type_info, "FullSerializer.Internal", "fsCyclicReferenceManager", "ObjectReferenceEqualityComparator");
        }
        inline app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator* create() {
            return il2cpp::create_object<app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator>(get_class());
        }
    } // namespace fsCyclicReferenceManager_ObjectReferenceEqualityComparator
} // namespace app::classes::types
