#pragma once
#include <Modloader/app/structs/IVRCompositor_FadeToColor.h>
#include <Modloader/app/structs/IVRCompositor_FadeToColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_FadeToColor {
        inline app::IVRCompositor_FadeToColor__Class** type_info() {
            static app::IVRCompositor_FadeToColor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_FadeToColor__Class**)(modloader::win::memory::resolve_rva(0x0473ACE0));
            }
            return cache;
        }
        inline app::IVRCompositor_FadeToColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_FadeToColor__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_FadeToColor");
        }
        inline app::IVRCompositor_FadeToColor* create() {
            return il2cpp::create_object<app::IVRCompositor_FadeToColor>(get_class());
        }
    } // namespace IVRCompositor_FadeToColor
} // namespace app::classes::types
