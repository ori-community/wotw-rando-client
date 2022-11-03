#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_ReconstructionFilter {
        inline app::ShaderID_ReconstructionFilter__Class** type_info = (app::ShaderID_ReconstructionFilter__Class**)(modloader::win::memory::resolve_rva(0x04788F68));
        inline app::ShaderID_ReconstructionFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ReconstructionFilter__Class>(type_info, "Kino", "ShaderID_ReconstructionFilter");
        }
        inline app::ShaderID_ReconstructionFilter* create() {
            return il2cpp::create_object<app::ShaderID_ReconstructionFilter>(get_class());
        }
    } // namespace ShaderID_ReconstructionFilter
} // namespace app::classes::types
