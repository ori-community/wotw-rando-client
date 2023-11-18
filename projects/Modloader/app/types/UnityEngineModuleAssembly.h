#pragma once
#include <Modloader/app/structs/UnityEngineModuleAssembly.h>
#include <Modloader/app/structs/UnityEngineModuleAssembly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityEngineModuleAssembly {
        inline app::UnityEngineModuleAssembly__Class** type_info() {
            static app::UnityEngineModuleAssembly__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityEngineModuleAssembly__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityEngineModuleAssembly__Class* get_class() {
            return il2cpp::get_class<app::UnityEngineModuleAssembly__Class>(type_info(), "UnityEngine", "UnityEngineModuleAssembly");
        }
        inline app::UnityEngineModuleAssembly* create() {
            return il2cpp::create_object<app::UnityEngineModuleAssembly>(get_class());
        }
    } // namespace UnityEngineModuleAssembly
} // namespace app::classes::types
