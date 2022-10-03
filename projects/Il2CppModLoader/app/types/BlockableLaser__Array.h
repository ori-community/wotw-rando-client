#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockableLaser__Array {
        namespace {
            app::BlockableLaser__Array__Class* type_info_ref = nullptr;
        }
        app::BlockableLaser__Array__Class** type_info = &type_info_ref;
        inline app::BlockableLaser__Array__Class* get_class() {
            return il2cpp::get_class<app::BlockableLaser__Array__Class>(type_info, "", "BlockableLaser[]");
        }
        inline app::BlockableLaser__Array* create() {
            return il2cpp::create_object<app::BlockableLaser__Array>(get_class());
        }
    } // namespace BlockableLaser__Array
} // namespace app::classes::types
