#pragma once
#include <Modloader/app/structs/CachingEventHandler.h>
#include <Modloader/app/structs/CachingEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CachingEventHandler {
        inline app::CachingEventHandler__Class** type_info() {
            static app::CachingEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CachingEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047118D8));
            }
            return cache;
        }
        inline app::CachingEventHandler__Class* get_class() {
            return il2cpp::get_class<app::CachingEventHandler__Class>(type_info(), "System.Xml", "CachingEventHandler");
        }
        inline app::CachingEventHandler* create() {
            return il2cpp::create_object<app::CachingEventHandler>(get_class());
        }
    } // namespace CachingEventHandler
} // namespace app::classes::types
