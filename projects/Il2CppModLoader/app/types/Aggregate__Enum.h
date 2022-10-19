#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Aggregate__Enum {
        namespace {
            inline app::Aggregate__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Aggregate__Enum__Class** type_info = &type_info_ref;
        inline app::Aggregate__Enum__Class* get_class() {
            return il2cpp::get_class<app::Aggregate__Enum__Class>(type_info, "System.Data", "Aggregate");
        }
        inline app::Aggregate__Enum* create() {
            return il2cpp::create_object<app::Aggregate__Enum>(get_class());
        }
    } // namespace Aggregate__Enum
} // namespace app::classes::types
