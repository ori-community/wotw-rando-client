#pragma once
#include <Modloader/app/structs/ExpandoObject_KeyCollection.h>
#include <Modloader/app/structs/ExpandoObject_KeyCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject_KeyCollection {
        inline app::ExpandoObject_KeyCollection__Class** type_info() {
            static app::ExpandoObject_KeyCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExpandoObject_KeyCollection__Class**)(modloader::win::memory::resolve_rva(0x0476FFB0));
            }
            return cache;
        }
        inline app::ExpandoObject_KeyCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_KeyCollection__Class>(type_info(), "System.Dynamic", "ExpandoObject", "KeyCollection");
        }
        inline app::ExpandoObject_KeyCollection* create() {
            return il2cpp::create_object<app::ExpandoObject_KeyCollection>(get_class());
        }
    } // namespace ExpandoObject_KeyCollection
} // namespace app::classes::types
