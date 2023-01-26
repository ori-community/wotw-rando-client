#pragma once
#include <Modloader/app/structs/UberStateCollectionGroup.h>
#include <Modloader/app/structs/UberStateCollectionGroup__Array.h>
#include <Modloader/app/structs/UberStateCollectionGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateCollectionGroup {
        inline app::UberStateCollectionGroup__Class** type_info() {
            static app::UberStateCollectionGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateCollectionGroup__Class**)(modloader::win::memory::resolve_rva(0x0477BC58));
            }
            return cache;
        }
        inline app::UberStateCollectionGroup__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollectionGroup__Class>(type_info(), "Moon", "UberStateCollectionGroup");
        }
        inline app::UberStateCollectionGroup* create() {
            return il2cpp::create_object<app::UberStateCollectionGroup>(get_class());
        }
        inline app::UberStateCollectionGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateCollectionGroup__Array>(get_class(), size);
        }
        inline app::UberStateCollectionGroup__Array* create_array(const std::vector<app::UberStateCollectionGroup*>& items) {
            return il2cpp::array_new<app::UberStateCollectionGroup__Array>(get_class(), items);
        }
    } // namespace UberStateCollectionGroup
} // namespace app::classes::types
