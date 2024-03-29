#pragma once
#include <Modloader/app/structs/ShaderID_SampleComparer.h>
#include <Modloader/app/structs/ShaderID_SampleComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SampleComparer {
        inline app::ShaderID_SampleComparer__Class** type_info() {
            static app::ShaderID_SampleComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_SampleComparer__Class**)(modloader::win::memory::resolve_rva(0x047568A0));
            }
            return cache;
        }
        inline app::ShaderID_SampleComparer__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SampleComparer__Class>(type_info(), "Moon.ArtOptimization", "ShaderID_SampleComparer");
        }
        inline app::ShaderID_SampleComparer* create() {
            return il2cpp::create_object<app::ShaderID_SampleComparer>(get_class());
        }
    } // namespace ShaderID_SampleComparer
} // namespace app::classes::types
