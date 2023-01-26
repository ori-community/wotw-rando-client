#pragma once
#include <Modloader/app/structs/IUberAtlasExternal.h>
#include <Modloader/app/structs/IUberAtlasExternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberAtlasExternal {
        inline app::IUberAtlasExternal__Class** type_info() {
            static app::IUberAtlasExternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberAtlasExternal__Class**)(modloader::win::memory::resolve_rva(0x0476C098));
            }
            return cache;
        }
        inline app::IUberAtlasExternal__Class* get_class() {
            return il2cpp::get_class<app::IUberAtlasExternal__Class>(type_info(), "", "IUberAtlasExternal");
        }
    } // namespace IUberAtlasExternal
} // namespace app::classes::types
