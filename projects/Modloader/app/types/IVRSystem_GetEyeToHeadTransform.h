#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_GetEyeToHeadTransform__Class.h>
#include <Modloader/app/structs/IVRSystem_GetEyeToHeadTransform.h>

namespace app::classes::types {
    namespace IVRSystem_GetEyeToHeadTransform {
        inline app::IVRSystem_GetEyeToHeadTransform__Class** type_info = (app::IVRSystem_GetEyeToHeadTransform__Class**)(modloader::win::memory::resolve_rva(0x04713ED0));
        inline app::IVRSystem_GetEyeToHeadTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetEyeToHeadTransform__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetEyeToHeadTransform");
        }
        inline app::IVRSystem_GetEyeToHeadTransform* create() {
            return il2cpp::create_object<app::IVRSystem_GetEyeToHeadTransform>(get_class());
        }
    } // namespace IVRSystem_GetEyeToHeadTransform
} // namespace app::classes::types
