#pragma once
#include <Modloader/app/structs/Triangulate.h>
#include <Modloader/app/structs/Triangulate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Triangulate {
        inline app::Triangulate__Class** type_info() {
            static app::Triangulate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Triangulate__Class**)(modloader::win::memory::resolve_rva(0x0476A238));
            }
            return cache;
        }
        inline app::Triangulate__Class* get_class() {
            return il2cpp::get_class<app::Triangulate__Class>(type_info(), "", "Triangulate");
        }
        inline app::Triangulate* create() {
            return il2cpp::create_object<app::Triangulate>(get_class());
        }
    } // namespace Triangulate
} // namespace app::classes::types
