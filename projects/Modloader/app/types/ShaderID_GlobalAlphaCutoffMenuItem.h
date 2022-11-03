#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_GlobalAlphaCutoffMenuItem {
        inline app::ShaderID_GlobalAlphaCutoffMenuItem__Class** type_info = (app::ShaderID_GlobalAlphaCutoffMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04775EB0));
        inline app::ShaderID_GlobalAlphaCutoffMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GlobalAlphaCutoffMenuItem__Class>(type_info, "", "ShaderID_GlobalAlphaCutoffMenuItem");
        }
        inline app::ShaderID_GlobalAlphaCutoffMenuItem* create() {
            return il2cpp::create_object<app::ShaderID_GlobalAlphaCutoffMenuItem>(get_class());
        }
    } // namespace ShaderID_GlobalAlphaCutoffMenuItem
} // namespace app::classes::types
