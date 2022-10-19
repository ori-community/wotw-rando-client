#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecorderFrame {
        inline app::RecorderFrame__Class** type_info = (app::RecorderFrame__Class**)(modloader::win::memory::resolve_rva(0x047331A8));
        inline app::RecorderFrame__Class* get_class() {
            return il2cpp::get_class<app::RecorderFrame__Class>(type_info, "", "RecorderFrame");
        }
        inline app::RecorderFrame* create() {
            return il2cpp::create_object<app::RecorderFrame>(get_class());
        }
        inline app::RecorderFrame__Array* create_array(int size) {
            return il2cpp::array_new<app::RecorderFrame__Array>(get_class(), size);
        }
        inline app::RecorderFrame__Array* create_array(const std::vector<app::RecorderFrame*>& items) {
            return il2cpp::array_new<app::RecorderFrame__Array>(get_class(), items);
        }
    } // namespace RecorderFrame
} // namespace app::classes::types
