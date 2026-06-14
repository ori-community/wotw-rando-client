#pragma once
#include <Modloader/app/structs/ShaderID_Bloom.h>
#include <Modloader/app/structs/ShaderID_Bloom__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Bloom {
        inline app::ShaderID_Bloom__Class** type_info() {
            static app::ShaderID_Bloom__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Bloom__Class**)(modloader::win::memory::resolve_rva(0x04711720));
            }
            return cache;
        }
        inline app::ShaderID_Bloom__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Bloom__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_Bloom");
        }
        inline app::ShaderID_Bloom* create() {
            return il2cpp::create_object<app::ShaderID_Bloom>(get_class());
        }
    } // namespace ShaderID_Bloom
} // namespace app::classes::types
