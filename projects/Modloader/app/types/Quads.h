#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Quads__Class.h>
#include <Modloader/app/structs/Quads.h>

namespace app::classes::types {
    namespace Quads {
        inline app::Quads__Class** type_info = (app::Quads__Class**)(modloader::win::memory::resolve_rva(0x047611E8));
        inline app::Quads__Class* get_class() {
            return il2cpp::get_class<app::Quads__Class>(type_info, "UnityStandardAssets.ImageEffects", "Quads");
        }
        inline app::Quads* create() {
            return il2cpp::create_object<app::Quads>(get_class());
        }
    } // namespace Quads
} // namespace app::classes::types
