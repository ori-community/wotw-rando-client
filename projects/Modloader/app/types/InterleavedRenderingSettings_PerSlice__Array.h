#pragma once
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Array.h>
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings_PerSlice__Array {
        inline app::InterleavedRenderingSettings_PerSlice__Array__Class** type_info() {
            static app::InterleavedRenderingSettings_PerSlice__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InterleavedRenderingSettings_PerSlice__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InterleavedRenderingSettings_PerSlice__Array__Class* get_class() {
            return il2cpp::get_class<app::InterleavedRenderingSettings_PerSlice__Array__Class>(type_info(), "Moon.Rendering", "InterleavedRenderingSettings+PerSlice[]");
        }
        inline app::InterleavedRenderingSettings_PerSlice__Array* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings_PerSlice__Array>(get_class());
        }
    } // namespace InterleavedRenderingSettings_PerSlice__Array
} // namespace app::classes::types
