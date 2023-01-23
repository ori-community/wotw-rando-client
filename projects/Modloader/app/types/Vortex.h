#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Vortex__Class.h>
#include <Modloader/app/structs/Vortex.h>

namespace app::classes::types {
    namespace Vortex {
        namespace {
            inline app::Vortex__Class* type_info_ref = nullptr;
        }
        inline app::Vortex__Class** type_info = &type_info_ref;
        inline app::Vortex__Class* get_class() {
            return il2cpp::get_class<app::Vortex__Class>(type_info, "UnityStandardAssets.ImageEffects", "Vortex");
        }
        inline app::Vortex* create() {
            return il2cpp::create_object<app::Vortex>(get_class());
        }
    } // namespace Vortex
} // namespace app::classes::types
