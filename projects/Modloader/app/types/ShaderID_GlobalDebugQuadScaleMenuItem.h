#pragma once
#include <Modloader/app/structs/ShaderID_GlobalDebugQuadScaleMenuItem.h>
#include <Modloader/app/structs/ShaderID_GlobalDebugQuadScaleMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GlobalDebugQuadScaleMenuItem {
        inline app::ShaderID_GlobalDebugQuadScaleMenuItem__Class** type_info() {
            static app::ShaderID_GlobalDebugQuadScaleMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_GlobalDebugQuadScaleMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047338A8));
            }
            return cache;
        }
        inline app::ShaderID_GlobalDebugQuadScaleMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GlobalDebugQuadScaleMenuItem__Class>(type_info(), "", "ShaderID_GlobalDebugQuadScaleMenuItem");
        }
        inline app::ShaderID_GlobalDebugQuadScaleMenuItem* create() {
            return il2cpp::create_object<app::ShaderID_GlobalDebugQuadScaleMenuItem>(get_class());
        }
    } // namespace ShaderID_GlobalDebugQuadScaleMenuItem
} // namespace app::classes::types
