#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAutoWebProxy__Class.h>

namespace app::classes::types {
    namespace IAutoWebProxy {
        inline app::IAutoWebProxy__Class** type_info = (app::IAutoWebProxy__Class**)(modloader::win::memory::resolve_rva(0x0473F800));
        inline app::IAutoWebProxy__Class* get_class() {
            return il2cpp::get_class<app::IAutoWebProxy__Class>(type_info, "System.Net", "IAutoWebProxy");
        }
    } // namespace IAutoWebProxy
} // namespace app::classes::types
