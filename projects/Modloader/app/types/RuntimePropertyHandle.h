#pragma once
#include <Modloader/app/structs/RuntimePropertyHandle.h>
#include <Modloader/app/structs/RuntimePropertyHandle__Boxed.h>
#include <Modloader/app/structs/RuntimePropertyHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimePropertyHandle {
        inline app::RuntimePropertyHandle__Class** type_info() {
            static app::RuntimePropertyHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimePropertyHandle__Class**)(modloader::win::memory::resolve_rva(0x0471F998));
            }
            return cache;
        }
        inline app::RuntimePropertyHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimePropertyHandle__Class>(type_info(), "Mono", "RuntimePropertyHandle");
        }
        inline app::RuntimePropertyHandle* create() {
            return il2cpp::create_object<app::RuntimePropertyHandle>(get_class());
        }
        inline app::RuntimePropertyHandle__Boxed* box(app::RuntimePropertyHandle value) {
            return il2cpp::box_value<app::RuntimePropertyHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimePropertyHandle
} // namespace app::classes::types
