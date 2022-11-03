#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericMappingEntry__Array {
        namespace {
            inline app::GenericMappingEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::GenericMappingEntry__Array__Class** type_info = &type_info_ref;
        inline app::GenericMappingEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericMappingEntry__Array__Class>(type_info, "", "GenericMappingEntry[]");
        }
        inline app::GenericMappingEntry__Array* create() {
            return il2cpp::create_object<app::GenericMappingEntry__Array>(get_class());
        }
    } // namespace GenericMappingEntry__Array
} // namespace app::classes::types
