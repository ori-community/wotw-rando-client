#pragma once
#include <Modloader/app/structs/IInstantiationHandler.h>
#include <Modloader/app/structs/IInstantiationHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInstantiationHandler {
        inline app::IInstantiationHandler__Class** type_info() {
            static app::IInstantiationHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IInstantiationHandler__Class**)(modloader::win::memory::resolve_rva(0x047037D8));
            }
            return cache;
        }
        inline app::IInstantiationHandler__Class* get_class() {
            return il2cpp::get_class<app::IInstantiationHandler__Class>(type_info(), "", "IInstantiationHandler");
        }
    } // namespace IInstantiationHandler
} // namespace app::classes::types
