#pragma once
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice.h>
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Array.h>
#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings_PerSlice {
        inline app::InterleavedRenderingSettings_PerSlice__Class** type_info() {
            static app::InterleavedRenderingSettings_PerSlice__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InterleavedRenderingSettings_PerSlice__Class**)(modloader::win::memory::resolve_rva(0x0470B748));
            }
            return cache;
        }
        inline app::InterleavedRenderingSettings_PerSlice__Class* get_class() {
            return il2cpp::get_nested_class<app::InterleavedRenderingSettings_PerSlice__Class>(type_info(), "Moon.Rendering", "InterleavedRenderingSettings", "PerSlice");
        }
        inline app::InterleavedRenderingSettings_PerSlice* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings_PerSlice>(get_class());
        }
        inline app::InterleavedRenderingSettings_PerSlice__Array* create_array(int size) {
            return il2cpp::array_new<app::InterleavedRenderingSettings_PerSlice__Array>(get_class(), size);
        }
        inline app::InterleavedRenderingSettings_PerSlice__Array* create_array(const std::vector<app::InterleavedRenderingSettings_PerSlice*>& items) {
            return il2cpp::array_new<app::InterleavedRenderingSettings_PerSlice__Array>(get_class(), items);
        }
    } // namespace InterleavedRenderingSettings_PerSlice
} // namespace app::classes::types
