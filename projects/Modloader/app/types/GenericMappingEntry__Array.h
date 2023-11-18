#pragma once
#include <Modloader/app/structs/GenericMappingEntry__Array.h>
#include <Modloader/app/structs/GenericMappingEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericMappingEntry__Array {
        inline app::GenericMappingEntry__Array__Class** type_info() {
            static app::GenericMappingEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericMappingEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericMappingEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericMappingEntry__Array__Class>(type_info(), "", "GenericMappingEntry[]");
        }
        inline app::GenericMappingEntry__Array* create() {
            return il2cpp::create_object<app::GenericMappingEntry__Array>(get_class());
        }
    } // namespace GenericMappingEntry__Array
} // namespace app::classes::types
