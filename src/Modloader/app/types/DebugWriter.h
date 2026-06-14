#pragma once
#include <Modloader/app/structs/DebugWriter.h>
#include <Modloader/app/structs/DebugWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugWriter {
        inline app::DebugWriter__Class** type_info() {
            static app::DebugWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugWriter__Class**)(modloader::win::memory::resolve_rva(0x0475C728));
            }
            return cache;
        }
        inline app::DebugWriter__Class* get_class() {
            return il2cpp::get_class<app::DebugWriter__Class>(type_info(), "TriangleNet.IO", "DebugWriter");
        }
        inline app::DebugWriter* create() {
            return il2cpp::create_object<app::DebugWriter>(get_class());
        }
    } // namespace DebugWriter
} // namespace app::classes::types
