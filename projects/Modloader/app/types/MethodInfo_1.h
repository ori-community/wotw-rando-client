#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MethodInfo_1 {
        inline app::MethodInfo_1__Class** type_info = (app::MethodInfo_1__Class**)(modloader::win::memory::resolve_rva(0x0476AEE8));
        inline app::MethodInfo_1__Class* get_class() {
            return il2cpp::get_class<app::MethodInfo_1__Class>(type_info, "System.Reflection", "MethodInfo");
        }
        inline app::MethodInfo_1* create() {
            return il2cpp::create_object<app::MethodInfo_1>(get_class());
        }
        inline app::MethodInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::MethodInfo_1__Array>(get_class(), size);
        }
        inline app::MethodInfo_1__Array* create_array(const std::vector<app::MethodInfo_1*>& items) {
            return il2cpp::array_new<app::MethodInfo_1__Array>(get_class(), items);
        }
    } // namespace MethodInfo_1
} // namespace app::classes::types
