#pragma once
#include <Modloader/app/structs/ShaderID_BloomAndFlares.h>
#include <Modloader/app/structs/ShaderID_BloomAndFlares__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BloomAndFlares {
        inline app::ShaderID_BloomAndFlares__Class** type_info() {
            static app::ShaderID_BloomAndFlares__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_BloomAndFlares__Class**)(modloader::win::memory::resolve_rva(0x04798FA8));
            }
            return cache;
        }
        inline app::ShaderID_BloomAndFlares__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BloomAndFlares__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_BloomAndFlares");
        }
        inline app::ShaderID_BloomAndFlares* create() {
            return il2cpp::create_object<app::ShaderID_BloomAndFlares>(get_class());
        }
    } // namespace ShaderID_BloomAndFlares
} // namespace app::classes::types
