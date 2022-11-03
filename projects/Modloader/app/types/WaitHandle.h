#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitHandle {
        inline app::WaitHandle__Class** type_info = (app::WaitHandle__Class**)(modloader::win::memory::resolve_rva(0x0474AE98));
        inline app::WaitHandle__Class* get_class() {
            return il2cpp::get_class<app::WaitHandle__Class>(type_info, "System.Threading", "WaitHandle");
        }
        inline app::WaitHandle* create() {
            return il2cpp::create_object<app::WaitHandle>(get_class());
        }
        inline app::WaitHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::WaitHandle__Array>(get_class(), size);
        }
        inline app::WaitHandle__Array* create_array(const std::vector<app::WaitHandle*>& items) {
            return il2cpp::array_new<app::WaitHandle__Array>(get_class(), items);
        }
    } // namespace WaitHandle
} // namespace app::classes::types
