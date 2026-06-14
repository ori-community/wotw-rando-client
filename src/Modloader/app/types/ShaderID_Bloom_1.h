#pragma once
#include <Modloader/app/structs/ShaderID_Bloom_1.h>
#include <Modloader/app/structs/ShaderID_Bloom_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Bloom_1 {
        inline app::ShaderID_Bloom_1__Class** type_info() {
            static app::ShaderID_Bloom_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Bloom_1__Class**)(modloader::win::memory::resolve_rva(0x0470DC90));
            }
            return cache;
        }
        inline app::ShaderID_Bloom_1__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Bloom_1__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ShaderID_Bloom");
        }
        inline app::ShaderID_Bloom_1* create() {
            return il2cpp::create_object<app::ShaderID_Bloom_1>(get_class());
        }
    } // namespace ShaderID_Bloom_1
} // namespace app::classes::types
