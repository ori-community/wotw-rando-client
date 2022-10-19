#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateCollectionReference {
        inline app::UberStateCollectionReference__Class** type_info = (app::UberStateCollectionReference__Class**)(modloader::win::memory::resolve_rva(0x04784130));
        inline app::UberStateCollectionReference__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollectionReference__Class>(type_info, "", "UberStateCollectionReference");
        }
        inline app::UberStateCollectionReference* create() {
            return il2cpp::create_object<app::UberStateCollectionReference>(get_class());
        }
    } // namespace UberStateCollectionReference
} // namespace app::classes::types
