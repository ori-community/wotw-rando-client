#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateHeader_UberStateType__Enum {
        namespace {
            inline app::UberStateHeader_UberStateType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberStateHeader_UberStateType__Enum__Class** type_info = &type_info_ref;
        inline app::UberStateHeader_UberStateType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateHeader_UberStateType__Enum__Class>(type_info, "Moon", "UberStateHeader", "UberStateType");
        }
        inline app::UberStateHeader_UberStateType__Enum* create() {
            return il2cpp::create_object<app::UberStateHeader_UberStateType__Enum>(get_class());
        }
    } // namespace UberStateHeader_UberStateType__Enum
} // namespace app::classes::types
