#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGasBallBait__Array {
        namespace {
            inline app::IGasBallBait__Array__Class* type_info_ref = nullptr;
        }
        inline app::IGasBallBait__Array__Class** type_info = &type_info_ref;
        inline app::IGasBallBait__Array__Class* get_class() {
            return il2cpp::get_class<app::IGasBallBait__Array__Class>(type_info, "", "IGasBallBait[]");
        }
        inline app::IGasBallBait__Array* create() {
            return il2cpp::create_object<app::IGasBallBait__Array>(get_class());
        }
    } // namespace IGasBallBait__Array
} // namespace app::classes::types
