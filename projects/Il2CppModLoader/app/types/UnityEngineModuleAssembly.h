#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityEngineModuleAssembly {
        namespace {
            inline app::UnityEngineModuleAssembly__Class* type_info_ref = nullptr;
        }
        inline app::UnityEngineModuleAssembly__Class** type_info = &type_info_ref;
        inline app::UnityEngineModuleAssembly__Class* get_class() {
            return il2cpp::get_class<app::UnityEngineModuleAssembly__Class>(type_info, "UnityEngine", "UnityEngineModuleAssembly");
        }
        inline app::UnityEngineModuleAssembly* create() {
            return il2cpp::create_object<app::UnityEngineModuleAssembly>(get_class());
        }
    } // namespace UnityEngineModuleAssembly
} // namespace app::classes::types
