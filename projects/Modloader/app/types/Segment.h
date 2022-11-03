#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Segment {
        inline app::Segment__Class** type_info = (app::Segment__Class**)(modloader::win::memory::resolve_rva(0x047794D0));
        inline app::Segment__Class* get_class() {
            return il2cpp::get_class<app::Segment__Class>(type_info, "TriangleNet.Geometry", "Segment");
        }
        inline app::Segment* create() {
            return il2cpp::create_object<app::Segment>(get_class());
        }
    } // namespace Segment
} // namespace app::classes::types
