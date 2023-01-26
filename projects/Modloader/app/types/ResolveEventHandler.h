#pragma once
#include <Modloader/app/structs/ResolveEventHandler.h>
#include <Modloader/app/structs/ResolveEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResolveEventHandler {
        inline app::ResolveEventHandler__Class** type_info() {
            static app::ResolveEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResolveEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0478F5B8));
            }
            return cache;
        }
        inline app::ResolveEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ResolveEventHandler__Class>(type_info(), "System", "ResolveEventHandler");
        }
        inline app::ResolveEventHandler* create() {
            return il2cpp::create_object<app::ResolveEventHandler>(get_class());
        }
    } // namespace ResolveEventHandler
} // namespace app::classes::types
