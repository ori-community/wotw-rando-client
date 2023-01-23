#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlendAnimation__Class.h>
#include <Modloader/app/structs/BlendAnimation.h>

namespace app::classes::types {
    namespace BlendAnimation {
        inline app::BlendAnimation__Class** type_info = (app::BlendAnimation__Class**)(modloader::win::memory::resolve_rva(0x0473FF00));
        inline app::BlendAnimation__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation__Class>(type_info, "Moon", "BlendAnimation");
        }
        inline app::BlendAnimation* create() {
            return il2cpp::create_object<app::BlendAnimation>(get_class());
        }
    } // namespace BlendAnimation
} // namespace app::classes::types
