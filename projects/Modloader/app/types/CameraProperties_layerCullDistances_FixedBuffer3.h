#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraProperties_layerCullDistances_FixedBuffer3__Class.h>
#include <Modloader/app/structs/CameraProperties_layerCullDistances_FixedBuffer3.h>
#include <Modloader/app/structs/CameraProperties_layerCullDistances_FixedBuffer3__Boxed.h>

namespace app::classes::types {
    namespace CameraProperties_layerCullDistances_FixedBuffer3 {
        namespace {
            inline app::CameraProperties_layerCullDistances_FixedBuffer3__Class* type_info_ref = nullptr;
        }
        inline app::CameraProperties_layerCullDistances_FixedBuffer3__Class** type_info = &type_info_ref;
        inline app::CameraProperties_layerCullDistances_FixedBuffer3__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraProperties_layerCullDistances_FixedBuffer3__Class>(type_info, "UnityEngine.Experimental.Rendering", "CameraProperties", "<layerCullDistances>__FixedBuffer3");
        }
        inline app::CameraProperties_layerCullDistances_FixedBuffer3* create() {
            return il2cpp::create_object<app::CameraProperties_layerCullDistances_FixedBuffer3>(get_class());
        }
        inline app::CameraProperties_layerCullDistances_FixedBuffer3__Boxed* box(app::CameraProperties_layerCullDistances_FixedBuffer3 value) {
            return il2cpp::box_value<app::CameraProperties_layerCullDistances_FixedBuffer3__Boxed>(get_class(), value);
        }
    } // namespace CameraProperties_layerCullDistances_FixedBuffer3
} // namespace app::classes::types
