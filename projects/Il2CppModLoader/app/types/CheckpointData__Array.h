#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CheckpointData__Array {
        namespace {
            inline app::CheckpointData__Array__Class* type_info_ref = nullptr;
        }
        inline app::CheckpointData__Array__Class** type_info = &type_info_ref;
        inline app::CheckpointData__Array__Class* get_class() {
            return il2cpp::get_class<app::CheckpointData__Array__Class>(type_info, "", "CheckpointData[]");
        }
        inline app::CheckpointData__Array* create() {
            return il2cpp::create_object<app::CheckpointData__Array>(get_class());
        }
    } // namespace CheckpointData__Array
} // namespace app::classes::types
