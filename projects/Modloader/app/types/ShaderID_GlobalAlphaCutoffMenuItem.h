#pragma once
#include <Modloader/app/structs/ShaderID_GlobalAlphaCutoffMenuItem.h>
#include <Modloader/app/structs/ShaderID_GlobalAlphaCutoffMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GlobalAlphaCutoffMenuItem {
        inline app::ShaderID_GlobalAlphaCutoffMenuItem__Class** type_info() {
            static app::ShaderID_GlobalAlphaCutoffMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_GlobalAlphaCutoffMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04775EB0));
            }
            return cache;
        }
        inline app::ShaderID_GlobalAlphaCutoffMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GlobalAlphaCutoffMenuItem__Class>(type_info(), "", "ShaderID_GlobalAlphaCutoffMenuItem");
        }
        inline app::ShaderID_GlobalAlphaCutoffMenuItem* create() {
            return il2cpp::create_object<app::ShaderID_GlobalAlphaCutoffMenuItem>(get_class());
        }
    } // namespace ShaderID_GlobalAlphaCutoffMenuItem
} // namespace app::classes::types
