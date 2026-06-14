#pragma once
#include <Modloader/app/structs/Segment.h>
#include <Modloader/app/structs/Segment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Segment {
        inline app::Segment__Class** type_info() {
            static app::Segment__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Segment__Class**)(modloader::win::memory::resolve_rva(0x047794D0));
            }
            return cache;
        }
        inline app::Segment__Class* get_class() {
            return il2cpp::get_class<app::Segment__Class>(type_info(), "TriangleNet.Geometry", "Segment");
        }
        inline app::Segment* create() {
            return il2cpp::create_object<app::Segment>(get_class());
        }
    } // namespace Segment
} // namespace app::classes::types
