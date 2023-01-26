#pragma once
#include <Modloader/app/structs/SliceRenderSettings_Slice__Array__Array.h>
#include <Modloader/app/structs/SliceRenderSettings_Slice__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SliceRenderSettings_Slice__Array__Array {
        inline app::SliceRenderSettings_Slice__Array__Array__Class** type_info() {
            static app::SliceRenderSettings_Slice__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SliceRenderSettings_Slice__Array__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SliceRenderSettings_Slice__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::SliceRenderSettings_Slice__Array__Array__Class>(type_info(), "Moon.Rendering", "SliceRenderSettings+Slice[][]");
        }
        inline app::SliceRenderSettings_Slice__Array__Array* create() {
            return il2cpp::create_object<app::SliceRenderSettings_Slice__Array__Array>(get_class());
        }
    } // namespace SliceRenderSettings_Slice__Array__Array
} // namespace app::classes::types
