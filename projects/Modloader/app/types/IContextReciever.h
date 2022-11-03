#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContextReciever {
        inline app::IContextReciever__Class** type_info = (app::IContextReciever__Class**)(modloader::win::memory::resolve_rva(0x0473B270));
        inline app::IContextReciever__Class* get_class() {
            return il2cpp::get_class<app::IContextReciever__Class>(type_info, "", "IContextReciever");
        }
    } // namespace IContextReciever
} // namespace app::classes::types
