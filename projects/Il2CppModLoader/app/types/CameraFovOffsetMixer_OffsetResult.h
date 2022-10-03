#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFovOffsetMixer_OffsetResult {
        namespace {
            app::CameraFovOffsetMixer_OffsetResult__Class* type_info_ref = nullptr;
        }
        app::CameraFovOffsetMixer_OffsetResult__Class** type_info = &type_info_ref;
        inline app::CameraFovOffsetMixer_OffsetResult__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFovOffsetMixer_OffsetResult__Class>(type_info, "", "CameraFovOffsetMixer", "OffsetResult");
        }
        inline app::CameraFovOffsetMixer_OffsetResult* create() {
            return il2cpp::create_object<app::CameraFovOffsetMixer_OffsetResult>(get_class());
        }
        inline app::CameraFovOffsetMixer_OffsetResult__Boxed* box(app::CameraFovOffsetMixer_OffsetResult value) {
            return il2cpp::box_value<app::CameraFovOffsetMixer_OffsetResult__Boxed>(get_class(), value);
        }
    } // namespace CameraFovOffsetMixer_OffsetResult
} // namespace app::classes::types
