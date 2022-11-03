#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAPI {
        inline app::UberShaderAPI__Class** type_info = (app::UberShaderAPI__Class**)(modloader::win::memory::resolve_rva(0x0471E900));
        inline app::UberShaderAPI__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAPI__Class>(type_info, "", "UberShaderAPI");
        }
        inline app::UberShaderAPI* create() {
            return il2cpp::create_object<app::UberShaderAPI>(get_class());
        }
    } // namespace UberShaderAPI
} // namespace app::classes::types
