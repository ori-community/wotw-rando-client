#pragma once
#include <Modloader/app/structs/DebugViewWriter.h>
#include <Modloader/app/structs/DebugViewWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugViewWriter {
        inline app::DebugViewWriter__Class** type_info() {
            static app::DebugViewWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugViewWriter__Class**)(modloader::win::memory::resolve_rva(0x04751348));
            }
            return cache;
        }
        inline app::DebugViewWriter__Class* get_class() {
            return il2cpp::get_class<app::DebugViewWriter__Class>(type_info(), "System.Linq.Expressions", "DebugViewWriter");
        }
        inline app::DebugViewWriter* create() {
            return il2cpp::create_object<app::DebugViewWriter>(get_class());
        }
    } // namespace DebugViewWriter
} // namespace app::classes::types
