#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TexturesPool {
        inline app::TexturesPool__Class** type_info = (app::TexturesPool__Class**)(modloader::win::memory::resolve_rva(0x0475A4C8));
        inline app::TexturesPool__Class* get_class() {
            return il2cpp::get_class<app::TexturesPool__Class>(type_info, "Moon.ArtOptimization", "TexturesPool");
        }
        inline app::TexturesPool* create() {
            return il2cpp::create_object<app::TexturesPool>(get_class());
        }
    } // namespace TexturesPool
} // namespace app::classes::types
