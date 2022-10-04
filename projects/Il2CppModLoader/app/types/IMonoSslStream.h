#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMonoSslStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMonoSslStream__Class** type_info;
        inline app::IMonoSslStream__Class* get_class() {
            return il2cpp::get_class<app::IMonoSslStream__Class>(type_info, "Mono.Security.Interface", "IMonoSslStream");
        }
    } // namespace IMonoSslStream
} // namespace app::classes::types
