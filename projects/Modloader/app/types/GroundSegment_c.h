#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundSegment_c__Class.h>
#include <Modloader/app/structs/GroundSegment_c.h>

namespace app::classes::types {
    namespace GroundSegment_c {
        inline app::GroundSegment_c__Class** type_info = (app::GroundSegment_c__Class**)(modloader::win::memory::resolve_rva(0x047955C8));
        inline app::GroundSegment_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundSegment_c__Class>(type_info, "", "GroundSegment", "<>c");
        }
        inline app::GroundSegment_c* create() {
            return il2cpp::create_object<app::GroundSegment_c>(get_class());
        }
    } // namespace GroundSegment_c
} // namespace app::classes::types
