#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BloomAndFlares {
        namespace {
            inline app::BloomAndFlares__Class* type_info_ref = nullptr;
        }
        inline app::BloomAndFlares__Class** type_info = &type_info_ref;
        inline app::BloomAndFlares__Class* get_class() {
            return il2cpp::get_class<app::BloomAndFlares__Class>(type_info, "UnityStandardAssets.ImageEffects", "BloomAndFlares");
        }
        inline app::BloomAndFlares* create() {
            return il2cpp::create_object<app::BloomAndFlares>(get_class());
        }
    } // namespace BloomAndFlares
} // namespace app::classes::types
