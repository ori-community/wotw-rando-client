#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrogEntity__Array {
        namespace {
            app::FrogEntity__Array__Class* type_info_ref = nullptr;
        }
        app::FrogEntity__Array__Class** type_info = &type_info_ref;
        inline app::FrogEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::FrogEntity__Array__Class>(type_info, "", "FrogEntity[]");
        }
        inline app::FrogEntity__Array* create() {
            return il2cpp::create_object<app::FrogEntity__Array>(get_class());
        }
    } // namespace FrogEntity__Array
} // namespace app::classes::types
