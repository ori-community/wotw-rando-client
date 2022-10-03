#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtraEvent__Array {
        namespace {
            app::ExtraEvent__Array__Class* type_info_ref = nullptr;
        }
        app::ExtraEvent__Array__Class** type_info = &type_info_ref;
        inline app::ExtraEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::ExtraEvent__Array__Class>(type_info, "PhysicsDebugTools", "ExtraEvent[]");
        }
        inline app::ExtraEvent__Array* create() {
            return il2cpp::create_object<app::ExtraEvent__Array>(get_class());
        }
    } // namespace ExtraEvent__Array
} // namespace app::classes::types
