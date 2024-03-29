#pragma once
#include <Modloader/app/structs/RuntimeFieldHandle.h>
#include <Modloader/app/structs/RuntimeFieldHandle__Boxed.h>
#include <Modloader/app/structs/RuntimeFieldHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeFieldHandle {
        inline app::RuntimeFieldHandle__Class** type_info() {
            static app::RuntimeFieldHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeFieldHandle__Class**)(modloader::win::memory::resolve_rva(0x04762638));
            }
            return cache;
        }
        inline app::RuntimeFieldHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeFieldHandle__Class>(type_info(), "System", "RuntimeFieldHandle");
        }
        inline app::RuntimeFieldHandle* create() {
            return il2cpp::create_object<app::RuntimeFieldHandle>(get_class());
        }
        inline app::RuntimeFieldHandle__Boxed* box(app::RuntimeFieldHandle value) {
            return il2cpp::box_value<app::RuntimeFieldHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeFieldHandle
} // namespace app::classes::types
