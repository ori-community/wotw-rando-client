#pragma once
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/InterfaceCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterfaceCache {
        inline app::InterfaceCache__Class** type_info() {
            static app::InterfaceCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InterfaceCache__Class**)(modloader::win::memory::resolve_rva(0x04723AB8));
            }
            return cache;
        }
        inline app::InterfaceCache__Class* get_class() {
            return il2cpp::get_class<app::InterfaceCache__Class>(type_info(), "", "InterfaceCache");
        }
        inline app::InterfaceCache* create() {
            return il2cpp::create_object<app::InterfaceCache>(get_class());
        }
    } // namespace InterfaceCache
} // namespace app::classes::types
