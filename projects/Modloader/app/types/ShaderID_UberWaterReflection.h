#pragma once
#include <Modloader/app/structs/ShaderID_UberWaterReflection.h>
#include <Modloader/app/structs/ShaderID_UberWaterReflection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_UberWaterReflection {
        inline app::ShaderID_UberWaterReflection__Class** type_info() {
            static app::ShaderID_UberWaterReflection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_UberWaterReflection__Class**)(modloader::win::memory::resolve_rva(0x0471A0B8));
            }
            return cache;
        }
        inline app::ShaderID_UberWaterReflection__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberWaterReflection__Class>(type_info(), "", "ShaderID_UberWaterReflection");
        }
        inline app::ShaderID_UberWaterReflection* create() {
            return il2cpp::create_object<app::ShaderID_UberWaterReflection>(get_class());
        }
    } // namespace ShaderID_UberWaterReflection
} // namespace app::classes::types
