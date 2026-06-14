#pragma once
#include <Modloader/app/structs/ShaderID_DynamicLookup.h>
#include <Modloader/app/structs/ShaderID_DynamicLookup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DynamicLookup {
        inline app::ShaderID_DynamicLookup__Class** type_info() {
            static app::ShaderID_DynamicLookup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_DynamicLookup__Class**)(modloader::win::memory::resolve_rva(0x04708AB0));
            }
            return cache;
        }
        inline app::ShaderID_DynamicLookup__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DynamicLookup__Class>(type_info(), "Colorful", "ShaderID_DynamicLookup");
        }
        inline app::ShaderID_DynamicLookup* create() {
            return il2cpp::create_object<app::ShaderID_DynamicLookup>(get_class());
        }
    } // namespace ShaderID_DynamicLookup
} // namespace app::classes::types
