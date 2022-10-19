#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiateDebugUtility {
        inline app::InstantiateDebugUtility__Class** type_info = (app::InstantiateDebugUtility__Class**)(modloader::win::memory::resolve_rva(0x04759098));
        inline app::InstantiateDebugUtility__Class* get_class() {
            return il2cpp::get_class<app::InstantiateDebugUtility__Class>(type_info, "InstantiateDebug", "InstantiateDebugUtility");
        }
        inline app::InstantiateDebugUtility* create() {
            return il2cpp::create_object<app::InstantiateDebugUtility>(get_class());
        }
    } // namespace InstantiateDebugUtility
} // namespace app::classes::types
