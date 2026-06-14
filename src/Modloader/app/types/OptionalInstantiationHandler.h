#pragma once
#include <Modloader/app/structs/OptionalInstantiationHandler.h>
#include <Modloader/app/structs/OptionalInstantiationHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OptionalInstantiationHandler {
        inline app::OptionalInstantiationHandler__Class** type_info() {
            static app::OptionalInstantiationHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OptionalInstantiationHandler__Class**)(modloader::win::memory::resolve_rva(0x0474FC48));
            }
            return cache;
        }
        inline app::OptionalInstantiationHandler__Class* get_class() {
            return il2cpp::get_class<app::OptionalInstantiationHandler__Class>(type_info(), "", "OptionalInstantiationHandler");
        }
        inline app::OptionalInstantiationHandler* create() {
            return il2cpp::create_object<app::OptionalInstantiationHandler>(get_class());
        }
    } // namespace OptionalInstantiationHandler
} // namespace app::classes::types
