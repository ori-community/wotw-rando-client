#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISegment__Array {
        namespace {
            inline app::ISegment__Array__Class* type_info_ref = nullptr;
        }
        inline app::ISegment__Array__Class** type_info = &type_info_ref;
        inline app::ISegment__Array__Class* get_class() {
            return il2cpp::get_class<app::ISegment__Array__Class>(type_info, "TriangleNet.Geometry", "ISegment[]");
        }
        inline app::ISegment__Array* create() {
            return il2cpp::create_object<app::ISegment__Array>(get_class());
        }
    } // namespace ISegment__Array
} // namespace app::classes::types
