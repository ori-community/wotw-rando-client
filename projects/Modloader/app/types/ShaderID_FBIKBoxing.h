#pragma once
#include <Modloader/app/structs/ShaderID_FBIKBoxing.h>
#include <Modloader/app/structs/ShaderID_FBIKBoxing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_FBIKBoxing {
        inline app::ShaderID_FBIKBoxing__Class** type_info() {
            static app::ShaderID_FBIKBoxing__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_FBIKBoxing__Class**)(modloader::win::memory::resolve_rva(0x0475F200));
            }
            return cache;
        }
        inline app::ShaderID_FBIKBoxing__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FBIKBoxing__Class>(type_info(), "RootMotion.Demos", "ShaderID_FBIKBoxing");
        }
        inline app::ShaderID_FBIKBoxing* create() {
            return il2cpp::create_object<app::ShaderID_FBIKBoxing>(get_class());
        }
    } // namespace ShaderID_FBIKBoxing
} // namespace app::classes::types
