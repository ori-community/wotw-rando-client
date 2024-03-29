#pragma once
#include <Modloader/app/structs/ShaderID_LookupFilter.h>
#include <Modloader/app/structs/ShaderID_LookupFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_LookupFilter {
        inline app::ShaderID_LookupFilter__Class** type_info() {
            static app::ShaderID_LookupFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_LookupFilter__Class**)(modloader::win::memory::resolve_rva(0x04736CE0));
            }
            return cache;
        }
        inline app::ShaderID_LookupFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LookupFilter__Class>(type_info(), "Colorful", "ShaderID_LookupFilter");
        }
        inline app::ShaderID_LookupFilter* create() {
            return il2cpp::create_object<app::ShaderID_LookupFilter>(get_class());
        }
    } // namespace ShaderID_LookupFilter
} // namespace app::classes::types
