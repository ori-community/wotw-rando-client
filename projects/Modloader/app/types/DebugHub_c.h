#pragma once
#include <Modloader/app/structs/DebugHub_c.h>
#include <Modloader/app/structs/DebugHub_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugHub_c {
        inline app::DebugHub_c__Class** type_info() {
            static app::DebugHub_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugHub_c__Class**)(modloader::win::memory::resolve_rva(0x04764138));
            }
            return cache;
        }
        inline app::DebugHub_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugHub_c__Class>(type_info(), "", "DebugHub", "<>c");
        }
        inline app::DebugHub_c* create() {
            return il2cpp::create_object<app::DebugHub_c>(get_class());
        }
    } // namespace DebugHub_c
} // namespace app::classes::types
