#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsCyclicReferenceManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsCyclicReferenceManager__Class** type_info;
        inline app::fsCyclicReferenceManager__Class* get_class() {
            return il2cpp::get_class<app::fsCyclicReferenceManager__Class>(type_info, "FullSerializer.Internal", "fsCyclicReferenceManager");
        }
        inline app::fsCyclicReferenceManager* create() {
            return il2cpp::create_object<app::fsCyclicReferenceManager>(get_class());
        }
    } // namespace fsCyclicReferenceManager
} // namespace app::classes::types
