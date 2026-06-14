#pragma once
#include <Modloader/app/structs/ShaderID_CC_Levels.h>
#include <Modloader/app/structs/ShaderID_CC_Levels__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_Levels {
        inline app::ShaderID_CC_Levels__Class** type_info() {
            static app::ShaderID_CC_Levels__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CC_Levels__Class**)(modloader::win::memory::resolve_rva(0x0477F8A0));
            }
            return cache;
        }
        inline app::ShaderID_CC_Levels__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_Levels__Class>(type_info(), "", "ShaderID_CC_Levels");
        }
        inline app::ShaderID_CC_Levels* create() {
            return il2cpp::create_object<app::ShaderID_CC_Levels>(get_class());
        }
    } // namespace ShaderID_CC_Levels
} // namespace app::classes::types
