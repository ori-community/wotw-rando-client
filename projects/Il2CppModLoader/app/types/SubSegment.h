#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubSegment {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubSegment__Class** type_info;
        inline app::SubSegment__Class* get_class() {
            return il2cpp::get_class<app::SubSegment__Class>(type_info, "TriangleNet.Topology", "SubSegment");
        }
        inline app::SubSegment* create() {
            return il2cpp::create_object<app::SubSegment>(get_class());
        }
        inline app::SubSegment__Array* create_array(int size) {
            return il2cpp::array_new<app::SubSegment__Array>(get_class(), size);
        }
        inline app::SubSegment__Array* create_array(const std::vector<app::SubSegment*>& items) {
            return il2cpp::array_new<app::SubSegment__Array>(get_class(), items);
        }
    } // namespace SubSegment
} // namespace app::classes::types
