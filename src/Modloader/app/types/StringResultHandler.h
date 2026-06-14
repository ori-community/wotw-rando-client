#pragma once
#include <Modloader/app/structs/StringResultHandler.h>
#include <Modloader/app/structs/StringResultHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringResultHandler {
        inline app::StringResultHandler__Class** type_info() {
            static app::StringResultHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringResultHandler__Class**)(modloader::win::memory::resolve_rva(0x04751DE0));
            }
            return cache;
        }
        inline app::StringResultHandler__Class* get_class() {
            return il2cpp::get_class<app::StringResultHandler__Class>(type_info(), "System.IO", "StringResultHandler");
        }
        inline app::StringResultHandler* create() {
            return il2cpp::create_object<app::StringResultHandler>(get_class());
        }
    } // namespace StringResultHandler
} // namespace app::classes::types
