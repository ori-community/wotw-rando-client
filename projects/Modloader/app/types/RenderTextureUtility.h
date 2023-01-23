#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderTextureUtility__Class.h>
#include <Modloader/app/structs/RenderTextureUtility.h>

namespace app::classes::types {
    namespace RenderTextureUtility {
        inline app::RenderTextureUtility__Class** type_info = (app::RenderTextureUtility__Class**)(modloader::win::memory::resolve_rva(0x0476E200));
        inline app::RenderTextureUtility__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureUtility__Class>(type_info, "UnityStandardAssets.CinematicEffects", "RenderTextureUtility");
        }
        inline app::RenderTextureUtility* create() {
            return il2cpp::create_object<app::RenderTextureUtility>(get_class());
        }
    } // namespace RenderTextureUtility
} // namespace app::classes::types
