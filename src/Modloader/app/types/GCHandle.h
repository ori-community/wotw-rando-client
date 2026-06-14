#pragma once
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/GCHandle__Array.h>
#include <Modloader/app/structs/GCHandle__Boxed.h>
#include <Modloader/app/structs/GCHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GCHandle {
        inline app::GCHandle__Class** type_info() {
            static app::GCHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GCHandle__Class**)(modloader::win::memory::resolve_rva(0x04721A18));
            }
            return cache;
        }
        inline app::GCHandle__Class* get_class() {
            return il2cpp::get_class<app::GCHandle__Class>(type_info(), "System.Runtime.InteropServices", "GCHandle");
        }
        inline app::GCHandle* create() {
            return il2cpp::create_object<app::GCHandle>(get_class());
        }
        inline app::GCHandle__Boxed* box(app::GCHandle value) {
            return il2cpp::box_value<app::GCHandle__Boxed>(get_class(), value);
        }
        inline app::GCHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::GCHandle__Array>(get_class(), size);
        }
        inline app::GCHandle__Array* create_array(const std::vector<app::GCHandle>& items) {
            return il2cpp::array_new<app::GCHandle__Array>(get_class(), items);
        }
    } // namespace GCHandle
} // namespace app::classes::types
