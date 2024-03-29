#pragma once
#include <Modloader/app/structs/RuntimeMethodHandle.h>
#include <Modloader/app/structs/RuntimeMethodHandle__Boxed.h>
#include <Modloader/app/structs/RuntimeMethodHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeMethodHandle {
        inline app::RuntimeMethodHandle__Class** type_info() {
            static app::RuntimeMethodHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeMethodHandle__Class**)(modloader::win::memory::resolve_rva(0x047825F8));
            }
            return cache;
        }
        inline app::RuntimeMethodHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeMethodHandle__Class>(type_info(), "System", "RuntimeMethodHandle");
        }
        inline app::RuntimeMethodHandle* create() {
            return il2cpp::create_object<app::RuntimeMethodHandle>(get_class());
        }
        inline app::RuntimeMethodHandle__Boxed* box(app::RuntimeMethodHandle value) {
            return il2cpp::box_value<app::RuntimeMethodHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeMethodHandle
} // namespace app::classes::types
