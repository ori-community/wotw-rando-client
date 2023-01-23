#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderKeyword_LensAberrations__Class.h>
#include <Modloader/app/structs/ShaderKeyword_LensAberrations.h>

namespace app::classes::types {
    namespace ShaderKeyword_LensAberrations {
        inline app::ShaderKeyword_LensAberrations__Class** type_info = (app::ShaderKeyword_LensAberrations__Class**)(modloader::win::memory::resolve_rva(0x047194C8));
        inline app::ShaderKeyword_LensAberrations__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_LensAberrations__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderKeyword_LensAberrations");
        }
        inline app::ShaderKeyword_LensAberrations* create() {
            return il2cpp::create_object<app::ShaderKeyword_LensAberrations>(get_class());
        }
    } // namespace ShaderKeyword_LensAberrations
} // namespace app::classes::types
