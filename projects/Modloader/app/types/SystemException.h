#pragma once
#include <Modloader/app/structs/SystemException.h>
#include <Modloader/app/structs/SystemException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SystemException {
        inline app::SystemException__Class** type_info() {
            static app::SystemException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SystemException__Class**)(modloader::win::memory::resolve_rva(0x047046D0));
            }
            return cache;
        }
        inline app::SystemException__Class* get_class() {
            return il2cpp::get_class<app::SystemException__Class>(type_info(), "System", "SystemException");
        }
        inline app::SystemException* create() {
            return il2cpp::create_object<app::SystemException>(get_class());
        }
    } // namespace SystemException
} // namespace app::classes::types
