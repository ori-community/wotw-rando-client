#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Twirl {
        namespace {
            inline app::Twirl__Class* type_info_ref = nullptr;
        }
        inline app::Twirl__Class** type_info = &type_info_ref;
        inline app::Twirl__Class* get_class() {
            return il2cpp::get_class<app::Twirl__Class>(type_info, "UnityStandardAssets.ImageEffects", "Twirl");
        }
        inline app::Twirl* create() {
            return il2cpp::create_object<app::Twirl>(get_class());
        }
    } // namespace Twirl
} // namespace app::classes::types
