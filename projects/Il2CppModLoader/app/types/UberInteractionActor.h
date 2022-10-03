#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionActor {
        namespace {
            app::UberInteractionActor__Class* type_info_ref = nullptr;
        }
        app::UberInteractionActor__Class** type_info = &type_info_ref;
        inline app::UberInteractionActor__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionActor__Class>(type_info, "", "UberInteractionActor");
        }
        inline app::UberInteractionActor* create() {
            return il2cpp::create_object<app::UberInteractionActor>(get_class());
        }
        inline app::UberInteractionActor__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionActor__Array>(get_class(), size);
        }
    } // namespace UberInteractionActor
} // namespace app::classes::types
