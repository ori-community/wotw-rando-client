#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IUberAtlasExternal__Class.h>

namespace app::classes::types {
    namespace IUberAtlasExternal {
        inline app::IUberAtlasExternal__Class** type_info = (app::IUberAtlasExternal__Class**)(modloader::win::memory::resolve_rva(0x0476C098));
        inline app::IUberAtlasExternal__Class* get_class() {
            return il2cpp::get_class<app::IUberAtlasExternal__Class>(type_info, "", "IUberAtlasExternal");
        }
    } // namespace IUberAtlasExternal
} // namespace app::classes::types
