#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInstantiationHandler {
        inline app::IInstantiationHandler__Class** type_info = (app::IInstantiationHandler__Class**)(modloader::win::memory::resolve_rva(0x047037D8));
        inline app::IInstantiationHandler__Class* get_class() {
            return il2cpp::get_class<app::IInstantiationHandler__Class>(type_info, "", "IInstantiationHandler");
        }
    } // namespace IInstantiationHandler
} // namespace app::classes::types
