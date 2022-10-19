#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateCollectionGroup {
        inline app::UberStateCollectionGroup__Class** type_info = (app::UberStateCollectionGroup__Class**)(modloader::win::memory::resolve_rva(0x0477BC58));
        inline app::UberStateCollectionGroup__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollectionGroup__Class>(type_info, "Moon", "UberStateCollectionGroup");
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
