#pragma once
#include <Modloader/app/structs/ShaderID_FoxEnemy2.h>
#include <Modloader/app/structs/ShaderID_FoxEnemy2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_FoxEnemy2 {
        inline app::ShaderID_FoxEnemy2__Class** type_info() {
            static app::ShaderID_FoxEnemy2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_FoxEnemy2__Class**)(modloader::win::memory::resolve_rva(0x04739CC0));
            }
            return cache;
        }
        inline app::ShaderID_FoxEnemy2__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FoxEnemy2__Class>(type_info(), "", "ShaderID_FoxEnemy2");
        }
        inline app::ShaderID_FoxEnemy2* create() {
            return il2cpp::create_object<app::ShaderID_FoxEnemy2>(get_class());
        }
    } // namespace ShaderID_FoxEnemy2
} // namespace app::classes::types
