#pragma once
#include <Modloader/app/structs/DirectProxy.h>
#include <Modloader/app/structs/DirectProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectProxy {
        inline app::DirectProxy__Class** type_info() {
            static app::DirectProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DirectProxy__Class**)(modloader::win::memory::resolve_rva(0x04732B60));
            }
            return cache;
        }
        inline app::DirectProxy__Class* get_class() {
            return il2cpp::get_class<app::DirectProxy__Class>(type_info(), "System.Net", "DirectProxy");
        }
        inline app::DirectProxy* create() {
            return il2cpp::create_object<app::DirectProxy>(get_class());
        }
    } // namespace DirectProxy
} // namespace app::classes::types
