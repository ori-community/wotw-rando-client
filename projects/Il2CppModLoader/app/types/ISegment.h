#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISegment {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISegment__Class** type_info;
        inline app::ISegment__Class* get_class() {
            return il2cpp::get_class<app::ISegment__Class>(type_info, "TriangleNet.Geometry", "ISegment");
        }
        inline app::ISegment* create() {
            return il2cpp::create_object<app::ISegment>(get_class());
        }
        inline app::ISegment__Array* create_array(int size) {
            return il2cpp::array_new<app::ISegment__Array>(get_class(), size);
        }
    } // namespace ISegment
} // namespace app::classes::types
