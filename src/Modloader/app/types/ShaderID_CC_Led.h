#pragma once
#include <Modloader/app/structs/ShaderID_CC_Led.h>
#include <Modloader/app/structs/ShaderID_CC_Led__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_Led {
        inline app::ShaderID_CC_Led__Class** type_info() {
            static app::ShaderID_CC_Led__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CC_Led__Class**)(modloader::win::memory::resolve_rva(0x047449B8));
            }
            return cache;
        }
        inline app::ShaderID_CC_Led__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_Led__Class>(type_info(), "", "ShaderID_CC_Led");
        }
        inline app::ShaderID_CC_Led* create() {
            return il2cpp::create_object<app::ShaderID_CC_Led>(get_class());
        }
    } // namespace ShaderID_CC_Led
} // namespace app::classes::types
