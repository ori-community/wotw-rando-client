#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubSegment__Array {
        namespace {
            inline app::SubSegment__Array__Class* type_info_ref = nullptr;
        }
        inline app::SubSegment__Array__Class** type_info = &type_info_ref;
        inline app::SubSegment__Array__Class* get_class() {
            return il2cpp::get_class<app::SubSegment__Array__Class>(type_info, "TriangleNet.Topology", "SubSegment[]");
        }
        inline app::SubSegment__Array* create() {
            return il2cpp::create_object<app::SubSegment__Array>(get_class());
        }
    } // namespace SubSegment__Array
} // namespace app::classes::types
