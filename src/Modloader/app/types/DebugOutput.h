#pragma once
#include <Modloader/app/structs/DebugOutput.h>
#include <Modloader/app/structs/DebugOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugOutput {
        inline app::DebugOutput__Class** type_info() {
            static app::DebugOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugOutput__Class**)(modloader::win::memory::resolve_rva(0x0474FF20));
            }
            return cache;
        }
        inline app::DebugOutput__Class* get_class() {
            return il2cpp::get_class<app::DebugOutput__Class>(type_info(), "", "DebugOutput");
        }
        inline app::DebugOutput* create() {
            return il2cpp::create_object<app::DebugOutput>(get_class());
        }
    } // namespace DebugOutput
} // namespace app::classes::types
