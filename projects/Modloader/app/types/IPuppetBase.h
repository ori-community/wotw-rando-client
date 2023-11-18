#pragma once
#include <Modloader/app/structs/IPuppetBase.h>
#include <Modloader/app/structs/IPuppetBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPuppetBase {
        inline app::IPuppetBase__Class** type_info() {
            static app::IPuppetBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPuppetBase__Class**)(modloader::win::memory::resolve_rva(0x04786860));
            }
            return cache;
        }
        inline app::IPuppetBase__Class* get_class() {
            return il2cpp::get_class<app::IPuppetBase__Class>(type_info(), "", "IPuppetBase");
        }
    } // namespace IPuppetBase
} // namespace app::classes::types
