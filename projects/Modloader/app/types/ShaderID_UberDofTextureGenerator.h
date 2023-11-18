#pragma once
#include <Modloader/app/structs/ShaderID_UberDofTextureGenerator.h>
#include <Modloader/app/structs/ShaderID_UberDofTextureGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_UberDofTextureGenerator {
        inline app::ShaderID_UberDofTextureGenerator__Class** type_info() {
            static app::ShaderID_UberDofTextureGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_UberDofTextureGenerator__Class**)(modloader::win::memory::resolve_rva(0x0477DE20));
            }
            return cache;
        }
        inline app::ShaderID_UberDofTextureGenerator__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberDofTextureGenerator__Class>(type_info(), "", "ShaderID_UberDofTextureGenerator");
        }
        inline app::ShaderID_UberDofTextureGenerator* create() {
            return il2cpp::create_object<app::ShaderID_UberDofTextureGenerator>(get_class());
        }
    } // namespace ShaderID_UberDofTextureGenerator
} // namespace app::classes::types
