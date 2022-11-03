#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMonoSslStream {
        inline app::IMonoSslStream__Class** type_info = (app::IMonoSslStream__Class**)(modloader::win::memory::resolve_rva(0x0472ADC8));
        inline app::IMonoSslStream__Class* get_class() {
            return il2cpp::get_class<app::IMonoSslStream__Class>(type_info, "Mono.Security.Interface", "IMonoSslStream");
        }
    } // namespace IMonoSslStream
} // namespace app::classes::types
