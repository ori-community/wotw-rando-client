#pragma once
#include <Modloader/app/structs/AmplifyColorBase__Array.h>
#include <Modloader/app/structs/AmplifyColorBase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorBase__Array {
        inline app::AmplifyColorBase__Array__Class** type_info() {
            static app::AmplifyColorBase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorBase__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorBase__Array__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorBase__Array__Class>(type_info(), "", "AmplifyColorBase[]");
        }
        inline app::AmplifyColorBase__Array* create() {
            return il2cpp::create_object<app::AmplifyColorBase__Array>(get_class());
        }
    } // namespace AmplifyColorBase__Array
} // namespace app::classes::types
