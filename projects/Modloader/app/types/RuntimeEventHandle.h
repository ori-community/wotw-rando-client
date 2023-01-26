#pragma once
#include <Modloader/app/structs/RuntimeEventHandle.h>
#include <Modloader/app/structs/RuntimeEventHandle__Boxed.h>
#include <Modloader/app/structs/RuntimeEventHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeEventHandle {
        inline app::RuntimeEventHandle__Class** type_info() {
            static app::RuntimeEventHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeEventHandle__Class**)(modloader::win::memory::resolve_rva(0x0476A6B0));
            }
            return cache;
        }
        inline app::RuntimeEventHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeEventHandle__Class>(type_info(), "Mono", "RuntimeEventHandle");
        }
        inline app::RuntimeEventHandle* create() {
            return il2cpp::create_object<app::RuntimeEventHandle>(get_class());
        }
        inline app::RuntimeEventHandle__Boxed* box(app::RuntimeEventHandle value) {
            return il2cpp::box_value<app::RuntimeEventHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeEventHandle
} // namespace app::classes::types
