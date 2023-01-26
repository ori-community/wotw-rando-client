#pragma once
#include <Modloader/app/structs/XalBrowserWrapper.h>
#include <Modloader/app/structs/XalBrowserWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalBrowserWrapper {
        inline app::XalBrowserWrapper__Class** type_info() {
            static app::XalBrowserWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalBrowserWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472DB18));
            }
            return cache;
        }
        inline app::XalBrowserWrapper__Class* get_class() {
            return il2cpp::get_class<app::XalBrowserWrapper__Class>(type_info(), "SystemIntegration", "XalBrowserWrapper");
        }
        inline app::XalBrowserWrapper* create() {
            return il2cpp::create_object<app::XalBrowserWrapper>(get_class());
        }
    } // namespace XalBrowserWrapper
} // namespace app::classes::types
