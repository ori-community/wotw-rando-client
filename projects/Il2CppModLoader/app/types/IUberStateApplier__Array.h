#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberStateApplier__Array {
        namespace {
            inline app::IUberStateApplier__Array__Class* type_info_ref = nullptr;
        }
        inline app::IUberStateApplier__Array__Class** type_info = &type_info_ref;
        inline app::IUberStateApplier__Array__Class* get_class() {
            return il2cpp::get_class<app::IUberStateApplier__Array__Class>(type_info, "Moon", "IUberStateApplier[]");
        }
        inline app::IUberStateApplier__Array* create() {
            return il2cpp::create_object<app::IUberStateApplier__Array>(get_class());
        }
    } // namespace IUberStateApplier__Array
} // namespace app::classes::types
