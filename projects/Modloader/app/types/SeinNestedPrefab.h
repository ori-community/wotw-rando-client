#pragma once
#include <Modloader/app/structs/SeinNestedPrefab.h>
#include <Modloader/app/structs/SeinNestedPrefab__Array.h>
#include <Modloader/app/structs/SeinNestedPrefab__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinNestedPrefab {
        inline app::SeinNestedPrefab__Class** type_info() {
            static app::SeinNestedPrefab__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinNestedPrefab__Class**)(modloader::win::memory::resolve_rva(0x0472D640));
            }
            return cache;
        }
        inline app::SeinNestedPrefab__Class* get_class() {
            return il2cpp::get_class<app::SeinNestedPrefab__Class>(type_info(), "", "SeinNestedPrefab");
        }
        inline app::SeinNestedPrefab* create() {
            return il2cpp::create_object<app::SeinNestedPrefab>(get_class());
        }
        inline app::SeinNestedPrefab__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinNestedPrefab__Array>(get_class(), size);
        }
        inline app::SeinNestedPrefab__Array* create_array(const std::vector<app::SeinNestedPrefab*>& items) {
            return il2cpp::array_new<app::SeinNestedPrefab__Array>(get_class(), items);
        }
    } // namespace SeinNestedPrefab
} // namespace app::classes::types
