#pragma once
#include <Modloader/app/structs/CameraFovOffsetMixer_OffsetResult.h>
#include <Modloader/app/structs/CameraFovOffsetMixer_OffsetResult__Boxed.h>
#include <Modloader/app/structs/CameraFovOffsetMixer_OffsetResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFovOffsetMixer_OffsetResult {
        inline app::CameraFovOffsetMixer_OffsetResult__Class** type_info() {
            static app::CameraFovOffsetMixer_OffsetResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFovOffsetMixer_OffsetResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFovOffsetMixer_OffsetResult__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFovOffsetMixer_OffsetResult__Class>(type_info(), "", "CameraFovOffsetMixer", "OffsetResult");
        }
        inline app::CameraFovOffsetMixer_OffsetResult* create() {
            return il2cpp::create_object<app::CameraFovOffsetMixer_OffsetResult>(get_class());
        }
        inline app::CameraFovOffsetMixer_OffsetResult__Boxed* box(app::CameraFovOffsetMixer_OffsetResult value) {
            return il2cpp::box_value<app::CameraFovOffsetMixer_OffsetResult__Boxed>(get_class(), value);
        }
    } // namespace CameraFovOffsetMixer_OffsetResult
} // namespace app::classes::types
