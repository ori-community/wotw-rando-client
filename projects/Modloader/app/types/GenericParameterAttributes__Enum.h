#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GenericParameterAttributes__Enum__Class.h>
#include <Modloader/app/structs/GenericParameterAttributes__Enum.h>

namespace app::classes::types {
    namespace GenericParameterAttributes__Enum {
        namespace {
            inline app::GenericParameterAttributes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GenericParameterAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::GenericParameterAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::GenericParameterAttributes__Enum__Class>(type_info, "System.Reflection", "GenericParameterAttributes");
        }
        inline app::GenericParameterAttributes__Enum* create() {
            return il2cpp::create_object<app::GenericParameterAttributes__Enum>(get_class());
        }
    } // namespace GenericParameterAttributes__Enum
} // namespace app::classes::types
