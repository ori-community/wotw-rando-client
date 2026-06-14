#pragma once
#include <Modloader/app/structs/EtwSession_c.h>
#include <Modloader/app/structs/EtwSession_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EtwSession_c {
        inline app::EtwSession_c__Class** type_info() {
            static app::EtwSession_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EtwSession_c__Class**)(modloader::win::memory::resolve_rva(0x0475CAD0));
            }
            return cache;
        }
        inline app::EtwSession_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EtwSession_c__Class>(type_info(), "System.Diagnostics.Tracing", "EtwSession", "<>c");
        }
        inline app::EtwSession_c* create() {
            return il2cpp::create_object<app::EtwSession_c>(get_class());
        }
    } // namespace EtwSession_c
} // namespace app::classes::types
