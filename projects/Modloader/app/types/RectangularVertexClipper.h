#pragma once
#include <Modloader/app/structs/RectangularVertexClipper.h>
#include <Modloader/app/structs/RectangularVertexClipper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectangularVertexClipper {
        inline app::RectangularVertexClipper__Class** type_info() {
            static app::RectangularVertexClipper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RectangularVertexClipper__Class**)(modloader::win::memory::resolve_rva(0x047540E0));
            }
            return cache;
        }
        inline app::RectangularVertexClipper__Class* get_class() {
            return il2cpp::get_class<app::RectangularVertexClipper__Class>(type_info(), "UnityEngine.UI", "RectangularVertexClipper");
        }
        inline app::RectangularVertexClipper* create() {
            return il2cpp::create_object<app::RectangularVertexClipper>(get_class());
        }
    } // namespace RectangularVertexClipper
} // namespace app::classes::types
