#pragma once
#include <Modloader/app/structs/WaitHandle.h>
#include <Modloader/app/structs/WaitHandle__Array.h>
#include <Modloader/app/structs/WaitHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitHandle {
        inline app::WaitHandle__Class** type_info() {
            static app::WaitHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitHandle__Class**)(modloader::win::memory::resolve_rva(0x0474AE98));
            }
            return cache;
        }
        inline app::WaitHandle__Class* get_class() {
            return il2cpp::get_class<app::WaitHandle__Class>(type_info(), "System.Threading", "WaitHandle");
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
