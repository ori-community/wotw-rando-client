#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeStructs_GPtrArrayPtr__Class.h>
#include <Modloader/app/structs/RuntimeStructs_GPtrArrayPtr.h>

namespace app::classes::types {
    namespace RuntimeStructs_GPtrArrayPtr {
        namespace {
            inline app::RuntimeStructs_GPtrArrayPtr__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeStructs_GPtrArrayPtr__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_GPtrArrayPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_GPtrArrayPtr__Class>(type_info, "Mono", "RuntimeStructs+GPtrArray*");
        }
        inline app::RuntimeStructs_GPtrArrayPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_GPtrArrayPtr>(get_class());
        }
    } // namespace RuntimeStructs_GPtrArrayPtr
} // namespace app::classes::types
