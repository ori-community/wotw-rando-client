#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Array__Class.h>
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Array.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings_PerSlice__Array {
        namespace {
            inline app::InterleavedRenderingSettings_PerSlice__Array__Class* type_info_ref = nullptr;
        }
        inline app::InterleavedRenderingSettings_PerSlice__Array__Class** type_info = &type_info_ref;
        inline app::InterleavedRenderingSettings_PerSlice__Array__Class* get_class() {
            return il2cpp::get_class<app::InterleavedRenderingSettings_PerSlice__Array__Class>(type_info, "Moon.Rendering", "InterleavedRenderingSettings+PerSlice[]");
        }
        inline app::InterleavedRenderingSettings_PerSlice__Array* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings_PerSlice__Array>(get_class());
        }
    } // namespace InterleavedRenderingSettings_PerSlice__Array
} // namespace app::classes::types
