#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionActor__Array {
        namespace {
            app::UberInteractionActor__Array__Class* type_info_ref = nullptr;
        }
        app::UberInteractionActor__Array__Class** type_info = &type_info_ref;
        inline app::UberInteractionActor__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionActor__Array__Class>(type_info, "", "UberInteractionActor[]");
        }
        inline app::UberInteractionActor__Array* create() {
            return il2cpp::create_object<app::UberInteractionActor__Array>(get_class());
        }
    } // namespace UberInteractionActor__Array
} // namespace app::classes::types
