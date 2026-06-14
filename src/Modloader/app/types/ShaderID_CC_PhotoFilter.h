#pragma once
#include <Modloader/app/structs/ShaderID_CC_PhotoFilter.h>
#include <Modloader/app/structs/ShaderID_CC_PhotoFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_PhotoFilter {
        inline app::ShaderID_CC_PhotoFilter__Class** type_info() {
            static app::ShaderID_CC_PhotoFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CC_PhotoFilter__Class**)(modloader::win::memory::resolve_rva(0x04726790));
            }
            return cache;
        }
        inline app::ShaderID_CC_PhotoFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_PhotoFilter__Class>(type_info(), "", "ShaderID_CC_PhotoFilter");
        }
        inline app::ShaderID_CC_PhotoFilter* create() {
            return il2cpp::create_object<app::ShaderID_CC_PhotoFilter>(get_class());
        }
    } // namespace ShaderID_CC_PhotoFilter
} // namespace app::classes::types
