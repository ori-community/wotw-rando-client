#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindSegment__Array {
        namespace {
            inline app::WindSegment__Array__Class* type_info_ref = nullptr;
        }
        inline app::WindSegment__Array__Class** type_info = &type_info_ref;
        inline app::WindSegment__Array__Class* get_class() {
            return il2cpp::get_class<app::WindSegment__Array__Class>(type_info, "", "WindSegment[]");
        }
        inline app::WindSegment__Array* create() {
            return il2cpp::create_object<app::WindSegment__Array>(get_class());
        }
    } // namespace WindSegment__Array
} // namespace app::classes::types
