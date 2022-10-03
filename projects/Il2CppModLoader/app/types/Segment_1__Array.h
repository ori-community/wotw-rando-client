#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Segment_1__Array {
        namespace {
            app::Segment_1__Array__Class* type_info_ref = nullptr;
        }
        app::Segment_1__Array__Class** type_info = &type_info_ref;
        inline app::Segment_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Segment_1__Array__Class>(type_info, "", "Segment[]");
        }
        inline app::Segment_1__Array* create() {
            return il2cpp::create_object<app::Segment_1__Array>(get_class());
        }
    } // namespace Segment_1__Array
} // namespace app::classes::types
