#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_VideoEditor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_VideoEditor__Class** type_info;
        inline app::ShaderID_VideoEditor__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_VideoEditor__Class>(type_info, "", "ShaderID_VideoEditor");
        }
        inline app::ShaderID_VideoEditor* create() {
            return il2cpp::create_object<app::ShaderID_VideoEditor>(get_class());
        }
    } // namespace ShaderID_VideoEditor
} // namespace app::classes::types
