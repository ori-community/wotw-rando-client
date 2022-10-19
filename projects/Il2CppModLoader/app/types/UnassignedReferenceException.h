#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnassignedReferenceException {
        inline app::UnassignedReferenceException__Class** type_info = (app::UnassignedReferenceException__Class**)(modloader::win::memory::resolve_rva(0x047210F0));
        inline app::UnassignedReferenceException__Class* get_class() {
            return il2cpp::get_class<app::UnassignedReferenceException__Class>(type_info, "UnityEngine", "UnassignedReferenceException");
        }
        inline app::UnassignedReferenceException* create() {
            return il2cpp::create_object<app::UnassignedReferenceException>(get_class());
        }
    } // namespace UnassignedReferenceException
} // namespace app::classes::types
