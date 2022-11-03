#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundSegment {
        inline app::GroundSegment__Class** type_info = (app::GroundSegment__Class**)(modloader::win::memory::resolve_rva(0x047933D8));
        inline app::GroundSegment__Class* get_class() {
            return il2cpp::get_class<app::GroundSegment__Class>(type_info, "", "GroundSegment");
        }
        inline app::GroundSegment* create() {
            return il2cpp::create_object<app::GroundSegment>(get_class());
        }
    } // namespace GroundSegment
} // namespace app::classes::types
