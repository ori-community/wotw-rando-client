#pragma once
#include <Modloader/app/structs/ShaderID_RGBSplit.h>
#include <Modloader/app/structs/ShaderID_RGBSplit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_RGBSplit {
        inline app::ShaderID_RGBSplit__Class** type_info() {
            static app::ShaderID_RGBSplit__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_RGBSplit__Class**)(modloader::win::memory::resolve_rva(0x04751DD8));
            }
            return cache;
        }
        inline app::ShaderID_RGBSplit__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_RGBSplit__Class>(type_info(), "Colorful", "ShaderID_RGBSplit");
        }
        inline app::ShaderID_RGBSplit* create() {
            return il2cpp::create_object<app::ShaderID_RGBSplit>(get_class());
        }
    } // namespace ShaderID_RGBSplit
} // namespace app::classes::types
