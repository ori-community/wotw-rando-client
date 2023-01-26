#pragma once
#include <Modloader/app/structs/Javascript__Array.h>
#include <Modloader/app/structs/Javascript__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Javascript__Array {
        inline app::Javascript__Array__Class** type_info() {
            static app::Javascript__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Javascript__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Javascript__Array__Class* get_class() {
            return il2cpp::get_class<app::Javascript__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Javascript[]");
        }
        inline app::Javascript__Array* create() {
            return il2cpp::create_object<app::Javascript__Array>(get_class());
        }
    } // namespace Javascript__Array
} // namespace app::classes::types
