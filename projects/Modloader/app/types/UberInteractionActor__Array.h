#pragma once
#include <Modloader/app/structs/UberInteractionActor__Array.h>
#include <Modloader/app/structs/UberInteractionActor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionActor__Array {
        inline app::UberInteractionActor__Array__Class** type_info() {
            static app::UberInteractionActor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberInteractionActor__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberInteractionActor__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionActor__Array__Class>(type_info(), "", "UberInteractionActor[]");
        }
        inline app::UberInteractionActor__Array* create() {
            return il2cpp::create_object<app::UberInteractionActor__Array>(get_class());
        }
    } // namespace UberInteractionActor__Array
} // namespace app::classes::types
