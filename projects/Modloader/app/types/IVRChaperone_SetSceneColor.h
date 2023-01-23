#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRChaperone_SetSceneColor__Class.h>
#include <Modloader/app/structs/IVRChaperone_SetSceneColor.h>

namespace app::classes::types {
    namespace IVRChaperone_SetSceneColor {
        inline app::IVRChaperone_SetSceneColor__Class** type_info = (app::IVRChaperone_SetSceneColor__Class**)(modloader::win::memory::resolve_rva(0x04769C98));
        inline app::IVRChaperone_SetSceneColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_SetSceneColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_SetSceneColor");
        }
        inline app::IVRChaperone_SetSceneColor* create() {
            return il2cpp::create_object<app::IVRChaperone_SetSceneColor>(get_class());
        }
    } // namespace IVRChaperone_SetSceneColor
} // namespace app::classes::types
