#pragma once
#include <Modloader/app/structs/StateFovModifier__Array.h>
#include <Modloader/app/structs/StateFovModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateFovModifier__Array {
        inline app::StateFovModifier__Array__Class** type_info() {
            static app::StateFovModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateFovModifier__Array__Class**)(modloader::win::memory::resolve_rva(0x04711AD8));
            }
            return cache;
        }
        inline app::StateFovModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::StateFovModifier__Array__Class>(type_info(), "", "StateFovModifier[]");
        }
        inline app::StateFovModifier__Array* create() {
            return il2cpp::create_object<app::StateFovModifier__Array>(get_class());
        }
    } // namespace StateFovModifier__Array
} // namespace app::classes::types
