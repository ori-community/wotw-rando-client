#pragma once
#include <Modloader/app/structs/ShaderID_VideoEditor.h>
#include <Modloader/app/structs/ShaderID_VideoEditor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_VideoEditor {
        inline app::ShaderID_VideoEditor__Class** type_info() {
            static app::ShaderID_VideoEditor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_VideoEditor__Class**)(modloader::win::memory::resolve_rva(0x04777FA8));
            }
            return cache;
        }
        inline app::ShaderID_VideoEditor__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_VideoEditor__Class>(type_info(), "", "ShaderID_VideoEditor");
        }
        inline app::ShaderID_VideoEditor* create() {
            return il2cpp::create_object<app::ShaderID_VideoEditor>(get_class());
        }
    } // namespace ShaderID_VideoEditor
} // namespace app::classes::types
