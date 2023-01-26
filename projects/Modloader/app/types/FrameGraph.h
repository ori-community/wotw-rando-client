#pragma once
#include <Modloader/app/structs/FrameGraph.h>
#include <Modloader/app/structs/FrameGraph__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameGraph {
        inline app::FrameGraph__Class** type_info() {
            static app::FrameGraph__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameGraph__Class**)(modloader::win::memory::resolve_rva(0x04764C50));
            }
            return cache;
        }
        inline app::FrameGraph__Class* get_class() {
            return il2cpp::get_class<app::FrameGraph__Class>(type_info(), "", "FrameGraph");
        }
        inline app::FrameGraph* create() {
            return il2cpp::create_object<app::FrameGraph>(get_class());
        }
    } // namespace FrameGraph
} // namespace app::classes::types
