#pragma once
#include <Modloader/app/structs/ShaderID_LookupFilter3D.h>
#include <Modloader/app/structs/ShaderID_LookupFilter3D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_LookupFilter3D {
        inline app::ShaderID_LookupFilter3D__Class** type_info() {
            static app::ShaderID_LookupFilter3D__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_LookupFilter3D__Class**)(modloader::win::memory::resolve_rva(0x04767C90));
            }
            return cache;
        }
        inline app::ShaderID_LookupFilter3D__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LookupFilter3D__Class>(type_info(), "Colorful", "ShaderID_LookupFilter3D");
        }
        inline app::ShaderID_LookupFilter3D* create() {
            return il2cpp::create_object<app::ShaderID_LookupFilter3D>(get_class());
        }
    } // namespace ShaderID_LookupFilter3D
} // namespace app::classes::types
