#pragma once
#include <Modloader/app/structs/ApplicationException.h>
#include <Modloader/app/structs/ApplicationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplicationException {
        inline app::ApplicationException__Class** type_info() {
            static app::ApplicationException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ApplicationException__Class**)(modloader::win::memory::resolve_rva(0x04725460));
            }
            return cache;
        }
        inline app::ApplicationException__Class* get_class() {
            return il2cpp::get_class<app::ApplicationException__Class>(type_info(), "System", "ApplicationException");
        }
        inline app::ApplicationException* create() {
            return il2cpp::create_object<app::ApplicationException>(get_class());
        }
    } // namespace ApplicationException
} // namespace app::classes::types
