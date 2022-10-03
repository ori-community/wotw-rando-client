#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionSequenceSerializer {
        namespace {
            app::ActionSequenceSerializer__Class* type_info_ref = nullptr;
        }
        app::ActionSequenceSerializer__Class** type_info = &type_info_ref;
        inline app::ActionSequenceSerializer__Class* get_class() {
            return il2cpp::get_class<app::ActionSequenceSerializer__Class>(type_info, "", "ActionSequenceSerializer");
        }
        inline app::ActionSequenceSerializer* create() {
            return il2cpp::create_object<app::ActionSequenceSerializer>(get_class());
        }
    } // namespace ActionSequenceSerializer
} // namespace app::classes::types
