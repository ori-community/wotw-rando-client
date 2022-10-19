#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Panel__Array {
        namespace {
            inline app::Panel__Array__Class* type_info_ref = nullptr;
        }
        inline app::Panel__Array__Class** type_info = &type_info_ref;
        inline app::Panel__Array__Class* get_class() {
            return il2cpp::get_class<app::Panel__Array__Class>(type_info, "", "Panel[]");
        }
        inline app::Panel__Array* create() {
            return il2cpp::create_object<app::Panel__Array>(get_class());
        }
    } // namespace Panel__Array
} // namespace app::classes::types
