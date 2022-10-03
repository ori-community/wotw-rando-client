#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskContinuationOptions__Enum {
        namespace {
            app::TaskContinuationOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::TaskContinuationOptions__Enum__Class** type_info = &type_info_ref;
        inline app::TaskContinuationOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskContinuationOptions__Enum__Class>(type_info, "System.Threading.Tasks", "TaskContinuationOptions");
        }
        inline app::TaskContinuationOptions__Enum* create() {
            return il2cpp::create_object<app::TaskContinuationOptions__Enum>(get_class());
        }
    } // namespace TaskContinuationOptions__Enum
} // namespace app::classes::types
