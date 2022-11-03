#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyMappings {
        inline app::KeyMappings__Class** type_info = (app::KeyMappings__Class**)(modloader::win::memory::resolve_rva(0x0473C698));
        inline app::KeyMappings__Class* get_class() {
            return il2cpp::get_class<app::KeyMappings__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "KeyMappings");
        }
        inline app::KeyMappings* create() {
            return il2cpp::create_object<app::KeyMappings>(get_class());
        }
    } // namespace KeyMappings
} // namespace app::classes::types
