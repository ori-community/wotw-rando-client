#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeashMarkEffect__Array {
        namespace {
            inline app::LeashMarkEffect__Array__Class* type_info_ref = nullptr;
        }
        inline app::LeashMarkEffect__Array__Class** type_info = &type_info_ref;
        inline app::LeashMarkEffect__Array__Class* get_class() {
            return il2cpp::get_class<app::LeashMarkEffect__Array__Class>(type_info, "", "LeashMarkEffect[]");
        }
        inline app::LeashMarkEffect__Array* create() {
            return il2cpp::create_object<app::LeashMarkEffect__Array>(get_class());
        }
    } // namespace LeashMarkEffect__Array
} // namespace app::classes::types
