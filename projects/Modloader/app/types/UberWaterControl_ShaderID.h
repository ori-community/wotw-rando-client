#pragma once
#include <Modloader/app/structs/UberWaterControl_ShaderID.h>
#include <Modloader/app/structs/UberWaterControl_ShaderID__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_ShaderID {
        inline app::UberWaterControl_ShaderID__Class** type_info() {
            static app::UberWaterControl_ShaderID__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterControl_ShaderID__Class**)(modloader::win::memory::resolve_rva(0x0472E2E0));
            }
            return cache;
        }
        inline app::UberWaterControl_ShaderID__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_ShaderID__Class>(type_info(), "", "UberWaterControl", "ShaderID");
        }
        inline app::UberWaterControl_ShaderID* create() {
            return il2cpp::create_object<app::UberWaterControl_ShaderID>(get_class());
        }
    } // namespace UberWaterControl_ShaderID
} // namespace app::classes::types
