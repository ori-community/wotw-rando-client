#pragma once
#include <Modloader/app/structs/IRaceServiceProvider.h>
#include <Modloader/app/structs/IRaceServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRaceServiceProvider {
        inline app::IRaceServiceProvider__Class** type_info() {
            static app::IRaceServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRaceServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0478ACD0));
            }
            return cache;
        }
        inline app::IRaceServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::IRaceServiceProvider__Class>(type_info(), "SystemIntegration.Races", "IRaceServiceProvider");
        }
    } // namespace IRaceServiceProvider
} // namespace app::classes::types
