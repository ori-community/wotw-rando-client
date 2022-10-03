#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoToSequenceData {
        namespace {
            app::GoToSequenceData__Class* type_info_ref = nullptr;
        }
        app::GoToSequenceData__Class** type_info = &type_info_ref;
        inline app::GoToSequenceData__Class* get_class() {
            return il2cpp::get_class<app::GoToSequenceData__Class>(type_info, "", "GoToSequenceData");
        }
        inline app::GoToSequenceData* create() {
            return il2cpp::create_object<app::GoToSequenceData>(get_class());
        }
        inline app::GoToSequenceData__Array* create_array(int size) {
            return il2cpp::array_new<app::GoToSequenceData__Array>(get_class(), size);
        }
    } // namespace GoToSequenceData
} // namespace app::classes::types
