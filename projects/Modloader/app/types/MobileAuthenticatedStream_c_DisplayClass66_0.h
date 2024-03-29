#pragma once
#include <Modloader/app/structs/MobileAuthenticatedStream_c_DisplayClass66_0.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_c_DisplayClass66_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream_c_DisplayClass66_0 {
        inline app::MobileAuthenticatedStream_c_DisplayClass66_0__Class** type_info() {
            static app::MobileAuthenticatedStream_c_DisplayClass66_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MobileAuthenticatedStream_c_DisplayClass66_0__Class**)(modloader::win::memory::resolve_rva(0x04717A48));
            }
            return cache;
        }
        inline app::MobileAuthenticatedStream_c_DisplayClass66_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MobileAuthenticatedStream_c_DisplayClass66_0__Class>(type_info(), "Mono.Net.Security", "MobileAuthenticatedStream", "<>c__DisplayClass66_0");
        }
        inline app::MobileAuthenticatedStream_c_DisplayClass66_0* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream_c_DisplayClass66_0>(get_class());
        }
    } // namespace MobileAuthenticatedStream_c_DisplayClass66_0
} // namespace app::classes::types
