#pragma once
#include <Modloader/app/structs/ShaderID_ReconstructionFilter.h>
#include <Modloader/app/structs/ShaderID_ReconstructionFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ReconstructionFilter {
        inline app::ShaderID_ReconstructionFilter__Class** type_info() {
            static app::ShaderID_ReconstructionFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ReconstructionFilter__Class**)(modloader::win::memory::resolve_rva(0x04788F68));
            }
            return cache;
        }
        inline app::ShaderID_ReconstructionFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ReconstructionFilter__Class>(type_info(), "Kino", "ShaderID_ReconstructionFilter");
        }
        inline app::ShaderID_ReconstructionFilter* create() {
            return il2cpp::create_object<app::ShaderID_ReconstructionFilter>(get_class());
        }
    } // namespace ShaderID_ReconstructionFilter
} // namespace app::classes::types
