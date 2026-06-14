#pragma once
#include <Modloader/app/structs/AttributeCollection_AttributeEntry__Array.h>
#include <Modloader/app/structs/AttributeCollection_AttributeEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributeCollection_AttributeEntry__Array {
        inline app::AttributeCollection_AttributeEntry__Array__Class** type_info() {
            static app::AttributeCollection_AttributeEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttributeCollection_AttributeEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x047924C8));
            }
            return cache;
        }
        inline app::AttributeCollection_AttributeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::AttributeCollection_AttributeEntry__Array__Class>(type_info(), "System.ComponentModel", "AttributeCollection+AttributeEntry[]");
        }
        inline app::AttributeCollection_AttributeEntry__Array* create() {
            return il2cpp::create_object<app::AttributeCollection_AttributeEntry__Array>(get_class());
        }
    } // namespace AttributeCollection_AttributeEntry__Array
} // namespace app::classes::types
