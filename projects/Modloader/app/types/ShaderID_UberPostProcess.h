#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_UberPostProcess {
        inline app::ShaderID_UberPostProcess__Class** type_info = (app::ShaderID_UberPostProcess__Class**)(modloader::win::memory::resolve_rva(0x04797660));
        inline app::ShaderID_UberPostProcess__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberPostProcess__Class>(type_info, "", "ShaderID_UberPostProcess");
        }
        inline app::ShaderID_UberPostProcess* create() {
            return il2cpp::create_object<app::ShaderID_UberPostProcess>(get_class());
        }
    } // namespace ShaderID_UberPostProcess
} // namespace app::classes::types
