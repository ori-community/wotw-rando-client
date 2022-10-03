#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DigZone__Array {
        namespace {
            app::DigZone__Array__Class* type_info_ref = nullptr;
        }
        app::DigZone__Array__Class** type_info = &type_info_ref;
        inline app::DigZone__Array__Class* get_class() {
            return il2cpp::get_class<app::DigZone__Array__Class>(type_info, "", "DigZone[]");
        }
        inline app::DigZone__Array* create() {
            return il2cpp::create_object<app::DigZone__Array>(get_class());
        }
    } // namespace DigZone__Array
} // namespace app::classes::types
