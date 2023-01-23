#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeStructs_MonoError__Class.h>
#include <Modloader/app/structs/RuntimeStructs_MonoError.h>
#include <Modloader/app/structs/RuntimeStructs_MonoError__Boxed.h>

namespace app::classes::types {
    namespace RuntimeStructs_MonoError {
        namespace {
            inline app::RuntimeStructs_MonoError__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeStructs_MonoError__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_MonoError__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_MonoError__Class>(type_info, "Mono", "RuntimeStructs", "MonoError");
        }
        inline app::RuntimeStructs_MonoError* create() {
            return il2cpp::create_object<app::RuntimeStructs_MonoError>(get_class());
        }
        inline app::RuntimeStructs_MonoError__Boxed* box(app::RuntimeStructs_MonoError value) {
            return il2cpp::box_value<app::RuntimeStructs_MonoError__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_MonoError
} // namespace app::classes::types
