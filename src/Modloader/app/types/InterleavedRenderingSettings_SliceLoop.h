#pragma once
#include <Modloader/app/structs/InterleavedRenderingSettings_SliceLoop.h>
#include <Modloader/app/structs/InterleavedRenderingSettings_SliceLoop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings_SliceLoop {
        inline app::InterleavedRenderingSettings_SliceLoop__Class** type_info() {
            static app::InterleavedRenderingSettings_SliceLoop__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InterleavedRenderingSettings_SliceLoop__Class**)(modloader::win::memory::resolve_rva(0x0475F680));
            }
            return cache;
        }
        inline app::InterleavedRenderingSettings_SliceLoop__Class* get_class() {
            return il2cpp::get_nested_class<app::InterleavedRenderingSettings_SliceLoop__Class>(type_info(), "Moon.Rendering", "InterleavedRenderingSettings", "SliceLoop");
        }
        inline app::InterleavedRenderingSettings_SliceLoop* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings_SliceLoop>(get_class());
        }
    } // namespace InterleavedRenderingSettings_SliceLoop
} // namespace app::classes::types
