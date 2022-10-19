#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VoidTaskResult {
        namespace {
            inline app::VoidTaskResult__Class* type_info_ref = nullptr;
        }
        inline app::VoidTaskResult__Class** type_info = &type_info_ref;
        inline app::VoidTaskResult__Class* get_class() {
            return il2cpp::get_class<app::VoidTaskResult__Class>(type_info, "System.Threading.Tasks", "VoidTaskResult");
        }
        inline app::VoidTaskResult* create() {
            return il2cpp::create_object<app::VoidTaskResult>(get_class());
        }
        inline app::VoidTaskResult__Boxed* box(app::VoidTaskResult value) {
            return il2cpp::box_value<app::VoidTaskResult__Boxed>(get_class(), value);
        }
    } // namespace VoidTaskResult
} // namespace app::classes::types
