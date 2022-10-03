#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Javascript {
        namespace {
            app::Javascript__Class* type_info_ref = nullptr;
        }
        app::Javascript__Class** type_info = &type_info_ref;
        inline app::Javascript__Class* get_class() {
            return il2cpp::get_class<app::Javascript__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Javascript");
        }
        inline app::Javascript* create() {
            return il2cpp::create_object<app::Javascript>(get_class());
        }
        inline app::Javascript__Array* create_array(int size) {
            return il2cpp::array_new<app::Javascript__Array>(get_class(), size);
        }
    } // namespace Javascript
} // namespace app::classes::types
