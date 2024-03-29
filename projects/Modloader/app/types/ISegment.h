#pragma once
#include <Modloader/app/structs/ISegment.h>
#include <Modloader/app/structs/ISegment__Array.h>
#include <Modloader/app/structs/ISegment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISegment {
        inline app::ISegment__Class** type_info() {
            static app::ISegment__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISegment__Class**)(modloader::win::memory::resolve_rva(0x04783BD0));
            }
            return cache;
        }
        inline app::ISegment__Class* get_class() {
            return il2cpp::get_class<app::ISegment__Class>(type_info(), "TriangleNet.Geometry", "ISegment");
        }
        inline app::ISegment__Array* create_array(int size) {
            return il2cpp::array_new<app::ISegment__Array>(get_class(), size);
        }
        inline app::ISegment__Array* create_array(const std::vector<app::ISegment*>& items) {
            return il2cpp::array_new<app::ISegment__Array>(get_class(), items);
        }
    } // namespace ISegment
} // namespace app::classes::types
