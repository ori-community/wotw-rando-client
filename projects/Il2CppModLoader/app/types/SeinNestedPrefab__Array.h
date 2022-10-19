#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinNestedPrefab__Array {
        inline app::SeinNestedPrefab__Array__Class** type_info = (app::SeinNestedPrefab__Array__Class**)(modloader::win::memory::resolve_rva(0x0474ADC0));
        inline app::SeinNestedPrefab__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinNestedPrefab__Array__Class>(type_info, "", "SeinNestedPrefab[]");
        }
        inline app::SeinNestedPrefab__Array* create() {
            return il2cpp::create_object<app::SeinNestedPrefab__Array>(get_class());
        }
    } // namespace SeinNestedPrefab__Array
} // namespace app::classes::types
