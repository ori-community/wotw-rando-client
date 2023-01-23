#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FieldMetadata__Array__Class.h>
#include <Modloader/app/structs/FieldMetadata__Array.h>

namespace app::classes::types {
    namespace FieldMetadata__Array {
        namespace {
            inline app::FieldMetadata__Array__Class* type_info_ref = nullptr;
        }
        inline app::FieldMetadata__Array__Class** type_info = &type_info_ref;
        inline app::FieldMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::FieldMetadata__Array__Class>(type_info, "System.Diagnostics.Tracing", "FieldMetadata[]");
        }
        inline app::FieldMetadata__Array* create() {
            return il2cpp::create_object<app::FieldMetadata__Array>(get_class());
        }
    } // namespace FieldMetadata__Array
} // namespace app::classes::types
