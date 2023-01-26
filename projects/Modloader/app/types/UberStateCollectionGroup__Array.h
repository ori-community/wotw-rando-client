#pragma once
#include <Modloader/app/structs/UberStateCollectionGroup__Array.h>
#include <Modloader/app/structs/UberStateCollectionGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateCollectionGroup__Array {
        inline app::UberStateCollectionGroup__Array__Class** type_info() {
            static app::UberStateCollectionGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateCollectionGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateCollectionGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollectionGroup__Array__Class>(type_info(), "Moon", "UberStateCollectionGroup[]");
        }
        inline app::UberStateCollectionGroup__Array* create() {
            return il2cpp::create_object<app::UberStateCollectionGroup__Array>(get_class());
        }
    } // namespace UberStateCollectionGroup__Array
} // namespace app::classes::types
