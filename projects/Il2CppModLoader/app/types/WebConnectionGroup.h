#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebConnectionGroup {
        inline app::WebConnectionGroup__Class** type_info = (app::WebConnectionGroup__Class**)(modloader::win::memory::resolve_rva(0x047055F8));
        inline app::WebConnectionGroup__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionGroup__Class>(type_info, "System.Net", "WebConnectionGroup");
        }
        inline app::WebConnectionGroup* create() {
            return il2cpp::create_object<app::WebConnectionGroup>(get_class());
        }
        inline app::WebConnectionGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::WebConnectionGroup__Array>(get_class(), size);
        }
        inline app::WebConnectionGroup__Array* create_array(const std::vector<app::WebConnectionGroup*>& items) {
            return il2cpp::array_new<app::WebConnectionGroup__Array>(get_class(), items);
        }
    } // namespace WebConnectionGroup
} // namespace app::classes::types
