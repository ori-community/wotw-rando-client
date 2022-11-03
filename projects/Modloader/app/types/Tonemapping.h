#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tonemapping {
        namespace {
            inline app::Tonemapping__Class* type_info_ref = nullptr;
        }
        inline app::Tonemapping__Class** type_info = &type_info_ref;
        inline app::Tonemapping__Class* get_class() {
            return il2cpp::get_class<app::Tonemapping__Class>(type_info, "UnityStandardAssets.ImageEffects", "Tonemapping");
        }
        inline app::Tonemapping* create() {
            return il2cpp::create_object<app::Tonemapping>(get_class());
        }
    } // namespace Tonemapping
} // namespace app::classes::types
