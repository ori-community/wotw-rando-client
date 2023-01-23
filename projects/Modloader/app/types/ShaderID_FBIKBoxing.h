#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_FBIKBoxing__Class.h>
#include <Modloader/app/structs/ShaderID_FBIKBoxing.h>

namespace app::classes::types {
    namespace ShaderID_FBIKBoxing {
        inline app::ShaderID_FBIKBoxing__Class** type_info = (app::ShaderID_FBIKBoxing__Class**)(modloader::win::memory::resolve_rva(0x0475F200));
        inline app::ShaderID_FBIKBoxing__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FBIKBoxing__Class>(type_info, "RootMotion.Demos", "ShaderID_FBIKBoxing");
        }
        inline app::ShaderID_FBIKBoxing* create() {
            return il2cpp::create_object<app::ShaderID_FBIKBoxing>(get_class());
        }
    } // namespace ShaderID_FBIKBoxing
} // namespace app::classes::types
