#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MudkisserChaseBehaviour {
        namespace {
            app::MudkisserChaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::MudkisserChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::MudkisserChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserChaseBehaviour__Class>(type_info, "", "MudkisserChaseBehaviour");
        }
        inline app::MudkisserChaseBehaviour* create() {
            return il2cpp::create_object<app::MudkisserChaseBehaviour>(get_class());
        }
    } // namespace MudkisserChaseBehaviour
} // namespace app::classes::types
