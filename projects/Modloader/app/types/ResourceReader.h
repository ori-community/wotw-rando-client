#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceReader {
        inline app::ResourceReader__Class** type_info = (app::ResourceReader__Class**)(modloader::win::memory::resolve_rva(0x047240A0));
        inline app::ResourceReader__Class* get_class() {
            return il2cpp::get_class<app::ResourceReader__Class>(type_info, "System.Resources", "ResourceReader");
        }
        inline app::ResourceReader* create() {
            return il2cpp::create_object<app::ResourceReader>(get_class());
        }
    } // namespace ResourceReader
} // namespace app::classes::types
