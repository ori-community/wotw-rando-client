#pragma once
#include <Modloader/app/structs/IVROverlay_SetKeyboardTransformAbsolute.h>
#include <Modloader/app/structs/IVROverlay_SetKeyboardTransformAbsolute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetKeyboardTransformAbsolute {
        inline app::IVROverlay_SetKeyboardTransformAbsolute__Class** type_info() {
            static app::IVROverlay_SetKeyboardTransformAbsolute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetKeyboardTransformAbsolute__Class**)(modloader::win::memory::resolve_rva(0x04772A98));
            }
            return cache;
        }
        inline app::IVROverlay_SetKeyboardTransformAbsolute__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetKeyboardTransformAbsolute__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetKeyboardTransformAbsolute");
        }
        inline app::IVROverlay_SetKeyboardTransformAbsolute* create() {
            return il2cpp::create_object<app::IVROverlay_SetKeyboardTransformAbsolute>(get_class());
        }
    } // namespace IVROverlay_SetKeyboardTransformAbsolute
} // namespace app::classes::types
