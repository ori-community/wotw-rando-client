#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerObjectSerializer {
        inline app::ServerObjectSerializer__Class** type_info = (app::ServerObjectSerializer__Class**)(modloader::win::memory::resolve_rva(0x047166A0));
        inline app::ServerObjectSerializer__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectSerializer__Class>(type_info, "", "ServerObjectSerializer");
        }
        inline app::ServerObjectSerializer* create() {
            return il2cpp::create_object<app::ServerObjectSerializer>(get_class());
        }
    } // namespace ServerObjectSerializer
} // namespace app::classes::types
