#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LayeredAnimation__Class.h>
#include <Modloader/app/structs/LayeredAnimation.h>

namespace app::classes::types {
    namespace LayeredAnimation {
        inline app::LayeredAnimation__Class** type_info = (app::LayeredAnimation__Class**)(modloader::win::memory::resolve_rva(0x04724AD0));
        inline app::LayeredAnimation__Class* get_class() {
            return il2cpp::get_class<app::LayeredAnimation__Class>(type_info, "Moon", "LayeredAnimation");
        }
        inline app::LayeredAnimation* create() {
            return il2cpp::create_object<app::LayeredAnimation>(get_class());
        }
    } // namespace LayeredAnimation
} // namespace app::classes::types
