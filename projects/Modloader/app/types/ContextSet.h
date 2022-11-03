#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContextSet {
        inline app::ContextSet__Class** type_info = (app::ContextSet__Class**)(modloader::win::memory::resolve_rva(0x04708F30));
        inline app::ContextSet__Class* get_class() {
            return il2cpp::get_class<app::ContextSet__Class>(type_info, "", "ContextSet");
        }
        inline app::ContextSet* create() {
            return il2cpp::create_object<app::ContextSet>(get_class());
        }
    } // namespace ContextSet
} // namespace app::classes::types
