#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OptionalInstantiationHandler__Class.h>
#include <Modloader/app/structs/OptionalInstantiationHandler.h>

namespace app::classes::types {
    namespace OptionalInstantiationHandler {
        inline app::OptionalInstantiationHandler__Class** type_info = (app::OptionalInstantiationHandler__Class**)(modloader::win::memory::resolve_rva(0x0474FC48));
        inline app::OptionalInstantiationHandler__Class* get_class() {
            return il2cpp::get_class<app::OptionalInstantiationHandler__Class>(type_info, "", "OptionalInstantiationHandler");
        }
        inline app::OptionalInstantiationHandler* create() {
            return il2cpp::create_object<app::OptionalInstantiationHandler>(get_class());
        }
    } // namespace OptionalInstantiationHandler
} // namespace app::classes::types
