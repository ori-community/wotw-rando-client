#pragma once
#include <Modloader/app/structs/IAutoWebProxy.h>
#include <Modloader/app/structs/IAutoWebProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAutoWebProxy {
        inline app::IAutoWebProxy__Class** type_info() {
            static app::IAutoWebProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAutoWebProxy__Class**)(modloader::win::memory::resolve_rva(0x0473F800));
            }
            return cache;
        }
        inline app::IAutoWebProxy__Class* get_class() {
            return il2cpp::get_class<app::IAutoWebProxy__Class>(type_info(), "System.Net", "IAutoWebProxy");
        }
    } // namespace IAutoWebProxy
} // namespace app::classes::types
