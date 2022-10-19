#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CheckpointFunctionality {
        namespace {
            inline app::CheckpointFunctionality__Class* type_info_ref = nullptr;
        }
        inline app::CheckpointFunctionality__Class** type_info = &type_info_ref;
        inline app::CheckpointFunctionality__Class* get_class() {
            return il2cpp::get_class<app::CheckpointFunctionality__Class>(type_info, "", "CheckpointFunctionality");
        }
        inline app::CheckpointFunctionality* create() {
            return il2cpp::create_object<app::CheckpointFunctionality>(get_class());
        }
        inline app::CheckpointFunctionality__Boxed* box(app::CheckpointFunctionality value) {
            return il2cpp::box_value<app::CheckpointFunctionality__Boxed>(get_class(), value);
        }
    } // namespace CheckpointFunctionality
} // namespace app::classes::types
