#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DoWorkEventArgs {
        inline app::DoWorkEventArgs__Class** type_info = (app::DoWorkEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0475DFA0));
        inline app::DoWorkEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DoWorkEventArgs__Class>(type_info, "System.ComponentModel", "DoWorkEventArgs");
        }
        inline app::DoWorkEventArgs* create() {
            return il2cpp::create_object<app::DoWorkEventArgs>(get_class());
        }
    } // namespace DoWorkEventArgs
} // namespace app::classes::types
