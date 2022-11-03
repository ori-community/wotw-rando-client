#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_UberScreenManager {
        inline app::ShaderID_UberScreenManager__Class** type_info = (app::ShaderID_UberScreenManager__Class**)(modloader::win::memory::resolve_rva(0x04733DD0));
        inline app::ShaderID_UberScreenManager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberScreenManager__Class>(type_info, "", "ShaderID_UberScreenManager");
        }
        inline app::ShaderID_UberScreenManager* create() {
            return il2cpp::create_object<app::ShaderID_UberScreenManager>(get_class());
        }
    } // namespace ShaderID_UberScreenManager
} // namespace app::classes::types
