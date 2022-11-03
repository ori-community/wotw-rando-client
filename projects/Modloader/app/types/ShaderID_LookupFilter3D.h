#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_LookupFilter3D {
        inline app::ShaderID_LookupFilter3D__Class** type_info = (app::ShaderID_LookupFilter3D__Class**)(modloader::win::memory::resolve_rva(0x04767C90));
        inline app::ShaderID_LookupFilter3D__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LookupFilter3D__Class>(type_info, "Colorful", "ShaderID_LookupFilter3D");
        }
        inline app::ShaderID_LookupFilter3D* create() {
            return il2cpp::create_object<app::ShaderID_LookupFilter3D>(get_class());
        }
    } // namespace ShaderID_LookupFilter3D
} // namespace app::classes::types
