#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionProbe_ReflectionProbeEvent__Enum {
        namespace {
            inline app::ReflectionProbe_ReflectionProbeEvent__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ReflectionProbe_ReflectionProbeEvent__Enum__Class** type_info = &type_info_ref;
        inline app::ReflectionProbe_ReflectionProbeEvent__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionProbe_ReflectionProbeEvent__Enum__Class>(type_info, "UnityEngine", "ReflectionProbe", "ReflectionProbeEvent");
        }
        inline app::ReflectionProbe_ReflectionProbeEvent__Enum* create() {
            return il2cpp::create_object<app::ReflectionProbe_ReflectionProbeEvent__Enum>(get_class());
        }
    } // namespace ReflectionProbe_ReflectionProbeEvent__Enum
} // namespace app::classes::types
