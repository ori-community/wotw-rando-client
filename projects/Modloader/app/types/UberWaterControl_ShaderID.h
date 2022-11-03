#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterControl_ShaderID {
        inline app::UberWaterControl_ShaderID__Class** type_info = (app::UberWaterControl_ShaderID__Class**)(modloader::win::memory::resolve_rva(0x0472E2E0));
        inline app::UberWaterControl_ShaderID__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_ShaderID__Class>(type_info, "", "UberWaterControl", "ShaderID");
        }
        inline app::UberWaterControl_ShaderID* create() {
            return il2cpp::create_object<app::UberWaterControl_ShaderID>(get_class());
        }
    } // namespace UberWaterControl_ShaderID
} // namespace app::classes::types
