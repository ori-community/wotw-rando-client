#pragma once
#include <Modloader/app/structs/IMonoSslStream.h>
#include <Modloader/app/structs/IMonoSslStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMonoSslStream {
        inline app::IMonoSslStream__Class** type_info() {
            static app::IMonoSslStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMonoSslStream__Class**)(modloader::win::memory::resolve_rva(0x0472ADC8));
            }
            return cache;
        }
        inline app::IMonoSslStream__Class* get_class() {
            return il2cpp::get_class<app::IMonoSslStream__Class>(type_info(), "Mono.Security.Interface", "IMonoSslStream");
        }
    } // namespace IMonoSslStream
} // namespace app::classes::types
