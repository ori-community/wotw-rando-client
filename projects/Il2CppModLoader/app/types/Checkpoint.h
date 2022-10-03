#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Checkpoint {
        namespace {
            app::Checkpoint__Class* type_info_ref = nullptr;
        }
        app::Checkpoint__Class** type_info = &type_info_ref;
        inline app::Checkpoint__Class* get_class() {
            return il2cpp::get_class<app::Checkpoint__Class>(type_info, "", "Checkpoint");
        }
        inline app::Checkpoint* create() {
            return il2cpp::create_object<app::Checkpoint>(get_class());
        }
    } // namespace Checkpoint
} // namespace app::classes::types
