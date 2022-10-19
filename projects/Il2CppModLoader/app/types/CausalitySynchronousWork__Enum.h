#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CausalitySynchronousWork__Enum {
        namespace {
            inline app::CausalitySynchronousWork__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CausalitySynchronousWork__Enum__Class** type_info = &type_info_ref;
        inline app::CausalitySynchronousWork__Enum__Class* get_class() {
            return il2cpp::get_class<app::CausalitySynchronousWork__Enum__Class>(type_info, "System.Threading.Tasks", "CausalitySynchronousWork");
        }
        inline app::CausalitySynchronousWork__Enum* create() {
            return il2cpp::create_object<app::CausalitySynchronousWork__Enum>(get_class());
        }
    } // namespace CausalitySynchronousWork__Enum
} // namespace app::classes::types
