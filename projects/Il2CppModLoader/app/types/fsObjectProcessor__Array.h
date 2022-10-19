#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsObjectProcessor__Array {
        namespace {
            inline app::fsObjectProcessor__Array__Class* type_info_ref = nullptr;
        }
        inline app::fsObjectProcessor__Array__Class** type_info = &type_info_ref;
        inline app::fsObjectProcessor__Array__Class* get_class() {
            return il2cpp::get_class<app::fsObjectProcessor__Array__Class>(type_info, "FullSerializer", "fsObjectProcessor[]");
        }
        inline app::fsObjectProcessor__Array* create() {
            return il2cpp::create_object<app::fsObjectProcessor__Array>(get_class());
        }
    } // namespace fsObjectProcessor__Array
} // namespace app::classes::types
