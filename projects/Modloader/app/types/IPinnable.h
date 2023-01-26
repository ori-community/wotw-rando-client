#pragma once
#include <Modloader/app/structs/IPinnable.h>
#include <Modloader/app/structs/IPinnable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPinnable {
        inline app::IPinnable__Class** type_info() {
            static app::IPinnable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPinnable__Class**)(modloader::win::memory::resolve_rva(0x04740580));
            }
            return cache;
        }
        inline app::IPinnable__Class* get_class() {
            return il2cpp::get_class<app::IPinnable__Class>(type_info(), "", "IPinnable");
        }
    } // namespace IPinnable
} // namespace app::classes::types
