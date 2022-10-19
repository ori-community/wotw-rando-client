#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolManager_ObjectTracking__Array {
        namespace {
            inline app::UberPoolManager_ObjectTracking__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolManager_ObjectTracking__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolManager_ObjectTracking__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolManager_ObjectTracking__Array__Class>(type_info, "", "UberPoolManager+ObjectTracking[]");
        }
        inline app::UberPoolManager_ObjectTracking__Array* create() {
            return il2cpp::create_object<app::UberPoolManager_ObjectTracking__Array>(get_class());
        }
    } // namespace UberPoolManager_ObjectTracking__Array
} // namespace app::classes::types
