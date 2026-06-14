#pragma once
#include <Modloader/app/structs/MainThreadDelegate.h>
#include <Modloader/app/structs/MainThreadDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MainThreadDelegate {
        inline app::MainThreadDelegate__Class** type_info() {
            static app::MainThreadDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MainThreadDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472A848));
            }
            return cache;
        }
        inline app::MainThreadDelegate__Class* get_class() {
            return il2cpp::get_class<app::MainThreadDelegate__Class>(type_info(), "Moon.Network.Web", "MainThreadDelegate");
        }
        inline app::MainThreadDelegate* create() {
            return il2cpp::create_object<app::MainThreadDelegate>(get_class());
        }
    } // namespace MainThreadDelegate
} // namespace app::classes::types
