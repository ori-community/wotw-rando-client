#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberStateApplierWithCallbacks__Array {
        namespace {
            inline app::IUberStateApplierWithCallbacks__Array__Class* type_info_ref = nullptr;
        }
        inline app::IUberStateApplierWithCallbacks__Array__Class** type_info = &type_info_ref;
        inline app::IUberStateApplierWithCallbacks__Array__Class* get_class() {
            return il2cpp::get_class<app::IUberStateApplierWithCallbacks__Array__Class>(type_info, "Moon", "IUberStateApplierWithCallbacks[]");
        }
        inline app::IUberStateApplierWithCallbacks__Array* create() {
            return il2cpp::create_object<app::IUberStateApplierWithCallbacks__Array>(get_class());
        }
    } // namespace IUberStateApplierWithCallbacks__Array
} // namespace app::classes::types
