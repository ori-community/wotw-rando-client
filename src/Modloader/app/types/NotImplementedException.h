#pragma once
#include <Modloader/app/structs/NotImplementedException.h>
#include <Modloader/app/structs/NotImplementedException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotImplementedException {
        inline app::NotImplementedException__Class** type_info() {
            static app::NotImplementedException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotImplementedException__Class**)(modloader::win::memory::resolve_rva(0x0471CEF8));
            }
            return cache;
        }
        inline app::NotImplementedException__Class* get_class() {
            return il2cpp::get_class<app::NotImplementedException__Class>(type_info(), "System", "NotImplementedException");
        }
        inline app::NotImplementedException* create() {
            return il2cpp::create_object<app::NotImplementedException>(get_class());
        }
    } // namespace NotImplementedException
} // namespace app::classes::types
