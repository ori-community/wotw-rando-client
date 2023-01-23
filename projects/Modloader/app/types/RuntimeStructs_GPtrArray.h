#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeStructs_GPtrArray__Class.h>
#include <Modloader/app/structs/RuntimeStructs_GPtrArray.h>
#include <Modloader/app/structs/RuntimeStructs_GPtrArray__Boxed.h>

namespace app::classes::types {
    namespace RuntimeStructs_GPtrArray {
        namespace {
            inline app::RuntimeStructs_GPtrArray__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeStructs_GPtrArray__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_GPtrArray__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_GPtrArray__Class>(type_info, "Mono", "RuntimeStructs", "GPtrArray");
        }
        inline app::RuntimeStructs_GPtrArray* create() {
            return il2cpp::create_object<app::RuntimeStructs_GPtrArray>(get_class());
        }
        inline app::RuntimeStructs_GPtrArray__Boxed* box(app::RuntimeStructs_GPtrArray value) {
            return il2cpp::box_value<app::RuntimeStructs_GPtrArray__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_GPtrArray
} // namespace app::classes::types
