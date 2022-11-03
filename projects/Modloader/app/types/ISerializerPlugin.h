#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISerializerPlugin {
        inline app::ISerializerPlugin__Class** type_info = (app::ISerializerPlugin__Class**)(modloader::win::memory::resolve_rva(0x04737D48));
        inline app::ISerializerPlugin__Class* get_class() {
            return il2cpp::get_class<app::ISerializerPlugin__Class>(type_info, "PlayFab", "ISerializerPlugin");
        }
    } // namespace ISerializerPlugin
} // namespace app::classes::types
