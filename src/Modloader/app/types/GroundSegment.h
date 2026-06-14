#pragma once
#include <Modloader/app/structs/GroundSegment.h>
#include <Modloader/app/structs/GroundSegment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundSegment {
        inline app::GroundSegment__Class** type_info() {
            static app::GroundSegment__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GroundSegment__Class**)(modloader::win::memory::resolve_rva(0x047933D8));
            }
            return cache;
        }
        inline app::GroundSegment__Class* get_class() {
            return il2cpp::get_class<app::GroundSegment__Class>(type_info(), "", "GroundSegment");
        }
        inline app::GroundSegment* create() {
            return il2cpp::create_object<app::GroundSegment>(get_class());
        }
    } // namespace GroundSegment
} // namespace app::classes::types
