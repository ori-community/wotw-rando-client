#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageProvider__Array {
        namespace {
            inline app::MessageProvider__Array__Class* type_info_ref = nullptr;
        }
        inline app::MessageProvider__Array__Class** type_info = &type_info_ref;
        inline app::MessageProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::MessageProvider__Array__Class>(type_info, "", "MessageProvider[]");
        }
        inline app::MessageProvider__Array* create() {
            return il2cpp::create_object<app::MessageProvider__Array>(get_class());
        }
    } // namespace MessageProvider__Array
} // namespace app::classes::types
