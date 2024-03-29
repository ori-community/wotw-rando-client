#pragma once
#include <Modloader/app/structs/SeinNestedPrefab__Array.h>
#include <Modloader/app/structs/SeinNestedPrefab__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinNestedPrefab__Array {
        inline app::SeinNestedPrefab__Array__Class** type_info() {
            static app::SeinNestedPrefab__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinNestedPrefab__Array__Class**)(modloader::win::memory::resolve_rva(0x0474ADC0));
            }
            return cache;
        }
        inline app::SeinNestedPrefab__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinNestedPrefab__Array__Class>(type_info(), "", "SeinNestedPrefab[]");
        }
        inline app::SeinNestedPrefab__Array* create() {
            return il2cpp::create_object<app::SeinNestedPrefab__Array>(get_class());
        }
    } // namespace SeinNestedPrefab__Array
} // namespace app::classes::types
