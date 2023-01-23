#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ResolveEventArgs__Class.h>
#include <Modloader/app/structs/ResolveEventArgs.h>

namespace app::classes::types {
    namespace ResolveEventArgs {
        inline app::ResolveEventArgs__Class** type_info = (app::ResolveEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04785A60));
        inline app::ResolveEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ResolveEventArgs__Class>(type_info, "System", "ResolveEventArgs");
        }
        inline app::ResolveEventArgs* create() {
            return il2cpp::create_object<app::ResolveEventArgs>(get_class());
        }
    } // namespace ResolveEventArgs
} // namespace app::classes::types
