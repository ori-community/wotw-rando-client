#pragma once
#include <Modloader/app/structs/fsCyclicReferenceManager_ObjectReferenceEqualityComparator.h>
#include <Modloader/app/structs/fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsCyclicReferenceManager_ObjectReferenceEqualityComparator {
        inline app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class** type_info() {
            static app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class**)(modloader::win::memory::resolve_rva(0x04791F50));
            }
            return cache;
        }
        inline app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class* get_class() {
            return il2cpp::get_nested_class<app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator__Class>(type_info(), "FullSerializer.Internal", "fsCyclicReferenceManager", "ObjectReferenceEqualityComparator");
        }
        inline app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator* create() {
            return il2cpp::create_object<app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator>(get_class());
        }
    } // namespace fsCyclicReferenceManager_ObjectReferenceEqualityComparator
} // namespace app::classes::types
