#pragma once
#include <Modloader/app/structs/ShaderID_AmplifyColorBase.h>
#include <Modloader/app/structs/ShaderID_AmplifyColorBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_AmplifyColorBase {
        inline app::ShaderID_AmplifyColorBase__Class** type_info() {
            static app::ShaderID_AmplifyColorBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_AmplifyColorBase__Class**)(modloader::win::memory::resolve_rva(0x0472A158));
            }
            return cache;
        }
        inline app::ShaderID_AmplifyColorBase__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AmplifyColorBase__Class>(type_info(), "AmplifyColor", "ShaderID_AmplifyColorBase");
        }
        inline app::ShaderID_AmplifyColorBase* create() {
            return il2cpp::create_object<app::ShaderID_AmplifyColorBase>(get_class());
        }
    } // namespace ShaderID_AmplifyColorBase
} // namespace app::classes::types
