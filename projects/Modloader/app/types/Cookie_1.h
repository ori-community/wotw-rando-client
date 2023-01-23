#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Cookie_1__Class.h>
#include <Modloader/app/structs/Cookie_1.h>
#include <Modloader/app/structs/Cookie_1__Array.h>

namespace app::classes::types {
    namespace Cookie_1 {
        inline app::Cookie_1__Class** type_info = (app::Cookie_1__Class**)(modloader::win::memory::resolve_rva(0x04796460));
        inline app::Cookie_1__Class* get_class() {
            return il2cpp::get_class<app::Cookie_1__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Cookie");
        }
        inline app::Cookie_1* create() {
            return il2cpp::create_object<app::Cookie_1>(get_class());
        }
        inline app::Cookie_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Cookie_1__Array>(get_class(), size);
        }
        inline app::Cookie_1__Array* create_array(const std::vector<app::Cookie_1*>& items) {
            return il2cpp::array_new<app::Cookie_1__Array>(get_class(), items);
        }
    } // namespace Cookie_1
} // namespace app::classes::types
