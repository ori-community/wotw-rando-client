#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OpenedHost__Class.h>
#include <Modloader/app/structs/OpenedHost.h>

namespace app::classes::types {
    namespace OpenedHost {
        inline app::OpenedHost__Class** type_info = (app::OpenedHost__Class**)(modloader::win::memory::resolve_rva(0x0474A038));
        inline app::OpenedHost__Class* get_class() {
            return il2cpp::get_class<app::OpenedHost__Class>(type_info, "System.Xml", "OpenedHost");
        }
        inline app::OpenedHost* create() {
            return il2cpp::create_object<app::OpenedHost>(get_class());
        }
    } // namespace OpenedHost
} // namespace app::classes::types
