#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotUI__Array {
        namespace {
            inline app::SaveSlotUI__Array__Class* type_info_ref = nullptr;
        }
        inline app::SaveSlotUI__Array__Class** type_info = &type_info_ref;
        inline app::SaveSlotUI__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotUI__Array__Class>(type_info, "", "SaveSlotUI[]");
        }
        inline app::SaveSlotUI__Array* create() {
            return il2cpp::create_object<app::SaveSlotUI__Array>(get_class());
        }
    } // namespace SaveSlotUI__Array
} // namespace app::classes::types
