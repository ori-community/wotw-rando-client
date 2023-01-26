#pragma once
#include <Modloader/app/structs/DebugRenderer.h>
#include <Modloader/app/structs/DebugRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugRenderer {
        inline app::DebugRenderer__Class** type_info() {
            static app::DebugRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugRenderer__Class**)(modloader::win::memory::resolve_rva(0x047506E8));
            }
            return cache;
        }
        inline app::DebugRenderer__Class* get_class() {
            return il2cpp::get_class<app::DebugRenderer__Class>(type_info(), "Moon.VisualDebug", "DebugRenderer");
        }
        inline app::DebugRenderer* create() {
            return il2cpp::create_object<app::DebugRenderer>(get_class());
        }
    } // namespace DebugRenderer
} // namespace app::classes::types
