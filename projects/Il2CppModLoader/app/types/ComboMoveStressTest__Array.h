#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComboMoveStressTest__Array {
        namespace {
            app::ComboMoveStressTest__Array__Class* type_info_ref = nullptr;
        }
        app::ComboMoveStressTest__Array__Class** type_info = &type_info_ref;
        inline app::ComboMoveStressTest__Array__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveStressTest__Array__Class>(type_info, "", "ComboMoveStressTest[]");
        }
        inline app::ComboMoveStressTest__Array* create() {
            return il2cpp::create_object<app::ComboMoveStressTest__Array>(get_class());
        }
    } // namespace ComboMoveStressTest__Array
} // namespace app::classes::types
