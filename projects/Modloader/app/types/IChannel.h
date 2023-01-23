#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IChannel__Class.h>

namespace app::classes::types {
    namespace IChannel {
        inline app::IChannel__Class** type_info = (app::IChannel__Class**)(modloader::win::memory::resolve_rva(0x0474EE58));
        inline app::IChannel__Class* get_class() {
            return il2cpp::get_class<app::IChannel__Class>(type_info, "System.Runtime.Remoting.Channels", "IChannel");
        }
    } // namespace IChannel
} // namespace app::classes::types
