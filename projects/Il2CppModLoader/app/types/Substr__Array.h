#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Substr__Array {
        namespace {
            app::Substr__Array__Class* type_info_ref = nullptr;
        }
        app::Substr__Array__Class** type_info = &type_info_ref;
        inline app::Substr__Array__Class* get_class() {
            return il2cpp::get_class<app::Substr__Array__Class>(type_info, "Moon", "Substr[]");
        }
        inline app::Substr__Array* create() {
            return il2cpp::create_object<app::Substr__Array>(get_class());
        }
    } // namespace Substr__Array
} // namespace app::classes::types
