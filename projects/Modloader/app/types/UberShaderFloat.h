#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderFloat {
        inline app::UberShaderFloat__Class** type_info = (app::UberShaderFloat__Class**)(modloader::win::memory::resolve_rva(0x04771DE0));
        inline app::UberShaderFloat__Class* get_class() {
            return il2cpp::get_class<app::UberShaderFloat__Class>(type_info, "", "UberShaderFloat");
        }
        inline app::UberShaderFloat* create() {
            return il2cpp::create_object<app::UberShaderFloat>(get_class());
        }
    } // namespace UberShaderFloat
} // namespace app::classes::types
