#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IExternallyModifiableUberState__Array {
        namespace {
            app::IExternallyModifiableUberState__Array__Class* type_info_ref = nullptr;
        }
        app::IExternallyModifiableUberState__Array__Class** type_info = &type_info_ref;
        inline app::IExternallyModifiableUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::IExternallyModifiableUberState__Array__Class>(type_info, "Moon", "IExternallyModifiableUberState[]");
        }
        inline app::IExternallyModifiableUberState__Array* create() {
            return il2cpp::create_object<app::IExternallyModifiableUberState__Array>(get_class());
        }
    } // namespace IExternallyModifiableUberState__Array
} // namespace app::classes::types
