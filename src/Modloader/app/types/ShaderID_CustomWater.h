#pragma once
#include <Modloader/app/structs/ShaderID_CustomWater.h>
#include <Modloader/app/structs/ShaderID_CustomWater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CustomWater {
        inline app::ShaderID_CustomWater__Class** type_info() {
            static app::ShaderID_CustomWater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CustomWater__Class**)(modloader::win::memory::resolve_rva(0x0476F508));
            }
            return cache;
        }
        inline app::ShaderID_CustomWater__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CustomWater__Class>(type_info(), "", "ShaderID_CustomWater");
        }
        inline app::ShaderID_CustomWater* create() {
            return il2cpp::create_object<app::ShaderID_CustomWater>(get_class());
        }
    } // namespace ShaderID_CustomWater
} // namespace app::classes::types
