#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InterleavedRenderingSettings_SliceLoop__Class.h>
#include <Modloader/app/structs/InterleavedRenderingSettings_SliceLoop.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings_SliceLoop {
        inline app::InterleavedRenderingSettings_SliceLoop__Class** type_info = (app::InterleavedRenderingSettings_SliceLoop__Class**)(modloader::win::memory::resolve_rva(0x0475F680));
        inline app::InterleavedRenderingSettings_SliceLoop__Class* get_class() {
            return il2cpp::get_nested_class<app::InterleavedRenderingSettings_SliceLoop__Class>(type_info, "Moon.Rendering", "InterleavedRenderingSettings", "SliceLoop");
        }
        inline app::InterleavedRenderingSettings_SliceLoop* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings_SliceLoop>(get_class());
        }
    } // namespace InterleavedRenderingSettings_SliceLoop
} // namespace app::classes::types
