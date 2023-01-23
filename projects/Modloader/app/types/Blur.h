#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Blur__Class.h>
#include <Modloader/app/structs/Blur.h>

namespace app::classes::types {
    namespace Blur {
        inline app::Blur__Class** type_info = (app::Blur__Class**)(modloader::win::memory::resolve_rva(0x04731E78));
        inline app::Blur__Class* get_class() {
            return il2cpp::get_class<app::Blur__Class>(type_info, "UnityStandardAssets.ImageEffects", "Blur");
        }
        inline app::Blur* create() {
            return il2cpp::create_object<app::Blur>(get_class());
        }
    } // namespace Blur
} // namespace app::classes::types
