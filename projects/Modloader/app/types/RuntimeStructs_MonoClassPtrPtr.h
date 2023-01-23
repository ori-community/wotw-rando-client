#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtrPtr__Class.h>
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtrPtr.h>

namespace app::classes::types {
    namespace RuntimeStructs_MonoClassPtrPtr {
        namespace {
            inline app::RuntimeStructs_MonoClassPtrPtr__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeStructs_MonoClassPtrPtr__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_MonoClassPtrPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_MonoClassPtrPtr__Class>(type_info, "Mono", "RuntimeStructs+MonoClass**");
        }
        inline app::RuntimeStructs_MonoClassPtrPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_MonoClassPtrPtr>(get_class());
        }
    } // namespace RuntimeStructs_MonoClassPtrPtr
} // namespace app::classes::types
