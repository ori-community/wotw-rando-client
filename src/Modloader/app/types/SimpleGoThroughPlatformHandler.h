#pragma once
#include <Modloader/app/structs/SimpleGoThroughPlatformHandler.h>
#include <Modloader/app/structs/SimpleGoThroughPlatformHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleGoThroughPlatformHandler {
        inline app::SimpleGoThroughPlatformHandler__Class** type_info() {
            static app::SimpleGoThroughPlatformHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleGoThroughPlatformHandler__Class**)(modloader::win::memory::resolve_rva(0x0474DE88));
            }
            return cache;
        }
        inline app::SimpleGoThroughPlatformHandler__Class* get_class() {
            return il2cpp::get_class<app::SimpleGoThroughPlatformHandler__Class>(type_info(), "", "SimpleGoThroughPlatformHandler");
        }
        inline app::SimpleGoThroughPlatformHandler* create() {
            return il2cpp::create_object<app::SimpleGoThroughPlatformHandler>(get_class());
        }
    } // namespace SimpleGoThroughPlatformHandler
} // namespace app::classes::types
