#pragma once
#include <Modloader/app/structs/TexturesPool.h>
#include <Modloader/app/structs/TexturesPool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TexturesPool {
        inline app::TexturesPool__Class** type_info() {
            static app::TexturesPool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TexturesPool__Class**)(modloader::win::memory::resolve_rva(0x0475A4C8));
            }
            return cache;
        }
        inline app::TexturesPool__Class* get_class() {
            return il2cpp::get_class<app::TexturesPool__Class>(type_info(), "Moon.ArtOptimization", "TexturesPool");
        }
        inline app::TexturesPool* create() {
            return il2cpp::create_object<app::TexturesPool>(get_class());
        }
    } // namespace TexturesPool
} // namespace app::classes::types
