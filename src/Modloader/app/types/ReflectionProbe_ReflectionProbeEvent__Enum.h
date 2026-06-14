#pragma once
#include <Modloader/app/structs/ReflectionProbe_ReflectionProbeEvent__Enum.h>
#include <Modloader/app/structs/ReflectionProbe_ReflectionProbeEvent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionProbe_ReflectionProbeEvent__Enum {
        inline app::ReflectionProbe_ReflectionProbeEvent__Enum__Class** type_info() {
            static app::ReflectionProbe_ReflectionProbeEvent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReflectionProbe_ReflectionProbeEvent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReflectionProbe_ReflectionProbeEvent__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionProbe_ReflectionProbeEvent__Enum__Class>(type_info(), "UnityEngine", "ReflectionProbe", "ReflectionProbeEvent");
        }
        inline app::ReflectionProbe_ReflectionProbeEvent__Enum* create() {
            return il2cpp::create_object<app::ReflectionProbe_ReflectionProbeEvent__Enum>(get_class());
        }
    } // namespace ReflectionProbe_ReflectionProbeEvent__Enum
} // namespace app::classes::types
