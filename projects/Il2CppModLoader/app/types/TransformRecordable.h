#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformRecordable {
        inline app::TransformRecordable__Class** type_info = (app::TransformRecordable__Class**)(modloader::win::memory::resolve_rva(0x04734828));
        inline app::TransformRecordable__Class* get_class() {
            return il2cpp::get_class<app::TransformRecordable__Class>(type_info, "", "TransformRecordable");
        }
        inline app::TransformRecordable* create() {
            return il2cpp::create_object<app::TransformRecordable>(get_class());
        }
        inline app::TransformRecordable__Array* create_array(int size) {
            return il2cpp::array_new<app::TransformRecordable__Array>(get_class(), size);
        }
        inline app::TransformRecordable__Array* create_array(const std::vector<app::TransformRecordable*>& items) {
            return il2cpp::array_new<app::TransformRecordable__Array>(get_class(), items);
        }
    } // namespace TransformRecordable
} // namespace app::classes::types
