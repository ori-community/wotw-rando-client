#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_LookupFilter {
        inline app::ShaderID_LookupFilter__Class** type_info = (app::ShaderID_LookupFilter__Class**)(modloader::win::memory::resolve_rva(0x04736CE0));
        inline app::ShaderID_LookupFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LookupFilter__Class>(type_info, "Colorful", "ShaderID_LookupFilter");
        }
        inline app::ShaderID_LookupFilter* create() {
            return il2cpp::create_object<app::ShaderID_LookupFilter>(get_class());
        }
    } // namespace ShaderID_LookupFilter
} // namespace app::classes::types
