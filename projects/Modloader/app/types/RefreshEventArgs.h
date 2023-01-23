#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RefreshEventArgs__Class.h>
#include <Modloader/app/structs/RefreshEventArgs.h>

namespace app::classes::types {
    namespace RefreshEventArgs {
        inline app::RefreshEventArgs__Class** type_info = (app::RefreshEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0470BFE0));
        inline app::RefreshEventArgs__Class* get_class() {
            return il2cpp::get_class<app::RefreshEventArgs__Class>(type_info, "System.ComponentModel", "RefreshEventArgs");
        }
        inline app::RefreshEventArgs* create() {
            return il2cpp::create_object<app::RefreshEventArgs>(get_class());
        }
    } // namespace RefreshEventArgs
} // namespace app::classes::types
