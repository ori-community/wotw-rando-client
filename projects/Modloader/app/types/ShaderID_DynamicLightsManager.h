#pragma once
#include <Modloader/app/structs/ShaderID_DynamicLightsManager.h>
#include <Modloader/app/structs/ShaderID_DynamicLightsManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DynamicLightsManager {
        inline app::ShaderID_DynamicLightsManager__Class** type_info() {
            static app::ShaderID_DynamicLightsManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_DynamicLightsManager__Class**)(modloader::win::memory::resolve_rva(0x047427E0));
            }
            return cache;
        }
        inline app::ShaderID_DynamicLightsManager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DynamicLightsManager__Class>(type_info(), "", "ShaderID_DynamicLightsManager");
        }
        inline app::ShaderID_DynamicLightsManager* create() {
            return il2cpp::create_object<app::ShaderID_DynamicLightsManager>(get_class());
        }
    } // namespace ShaderID_DynamicLightsManager
} // namespace app::classes::types
