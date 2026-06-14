#pragma once
#include <Modloader/app/structs/GroundSegment_c.h>
#include <Modloader/app/structs/GroundSegment_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundSegment_c {
        inline app::GroundSegment_c__Class** type_info() {
            static app::GroundSegment_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GroundSegment_c__Class**)(modloader::win::memory::resolve_rva(0x047955C8));
            }
            return cache;
        }
        inline app::GroundSegment_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundSegment_c__Class>(type_info(), "", "GroundSegment", "<>c");
        }
        inline app::GroundSegment_c* create() {
            return il2cpp::create_object<app::GroundSegment_c>(get_class());
        }
    } // namespace GroundSegment_c
} // namespace app::classes::types
