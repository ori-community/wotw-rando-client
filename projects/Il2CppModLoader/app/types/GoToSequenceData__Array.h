#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoToSequenceData__Array {
        namespace {
            app::GoToSequenceData__Array__Class* type_info_ref = nullptr;
        }
        app::GoToSequenceData__Array__Class** type_info = &type_info_ref;
        inline app::GoToSequenceData__Array__Class* get_class() {
            return il2cpp::get_class<app::GoToSequenceData__Array__Class>(type_info, "", "GoToSequenceData[]");
        }
        inline app::GoToSequenceData__Array* create() {
            return il2cpp::create_object<app::GoToSequenceData__Array>(get_class());
        }
    } // namespace GoToSequenceData__Array
} // namespace app::classes::types
