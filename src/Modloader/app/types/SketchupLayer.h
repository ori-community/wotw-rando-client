#pragma once
#include <Modloader/app/structs/SketchupLayer.h>
#include <Modloader/app/structs/SketchupLayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SketchupLayer {
        inline app::SketchupLayer__Class** type_info() {
            static app::SketchupLayer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SketchupLayer__Class**)(modloader::win::memory::resolve_rva(0x047240B0));
            }
            return cache;
        }
        inline app::SketchupLayer__Class* get_class() {
            return il2cpp::get_class<app::SketchupLayer__Class>(type_info(), "", "SketchupLayer");
        }
        inline app::SketchupLayer* create() {
            return il2cpp::create_object<app::SketchupLayer>(get_class());
        }
    } // namespace SketchupLayer
} // namespace app::classes::types
