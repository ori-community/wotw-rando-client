#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinearPath__Array {
        namespace {
            inline app::LinearPath__Array__Class* type_info_ref = nullptr;
        }
        inline app::LinearPath__Array__Class** type_info = &type_info_ref;
        inline app::LinearPath__Array__Class* get_class() {
            return il2cpp::get_class<app::LinearPath__Array__Class>(type_info, "", "LinearPath[]");
        }
        inline app::LinearPath__Array* create() {
            return il2cpp::create_object<app::LinearPath__Array>(get_class());
        }
    } // namespace LinearPath__Array
} // namespace app::classes::types
