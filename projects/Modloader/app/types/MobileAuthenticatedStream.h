#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MobileAuthenticatedStream__Class.h>
#include <Modloader/app/structs/MobileAuthenticatedStream.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream {
        inline app::MobileAuthenticatedStream__Class** type_info = (app::MobileAuthenticatedStream__Class**)(modloader::win::memory::resolve_rva(0x04730D40));
        inline app::MobileAuthenticatedStream__Class* get_class() {
            return il2cpp::get_class<app::MobileAuthenticatedStream__Class>(type_info, "Mono.Net.Security", "MobileAuthenticatedStream");
        }
        inline app::MobileAuthenticatedStream* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream>(get_class());
        }
    } // namespace MobileAuthenticatedStream
} // namespace app::classes::types
