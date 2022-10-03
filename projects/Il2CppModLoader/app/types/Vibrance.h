#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vibrance {
        namespace {
            app::Vibrance__Class* type_info_ref = nullptr;
        }
        app::Vibrance__Class** type_info = &type_info_ref;
        inline app::Vibrance__Class* get_class() {
            return il2cpp::get_class<app::Vibrance__Class>(type_info, "Colorful", "Vibrance");
        }
        inline app::Vibrance* create() {
            return il2cpp::create_object<app::Vibrance>(get_class());
        }
    } // namespace Vibrance
} // namespace app::classes::types
