#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509Certificate2Impl__Class.h>
#include <Modloader/app/structs/X509Certificate2Impl.h>

namespace app::classes::types {
    namespace X509Certificate2Impl {
        inline app::X509Certificate2Impl__Class** type_info = (app::X509Certificate2Impl__Class**)(modloader::win::memory::resolve_rva(0x047736A0));
        inline app::X509Certificate2Impl__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate2Impl__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Certificate2Impl");
        }
        inline app::X509Certificate2Impl* create() {
            return il2cpp::create_object<app::X509Certificate2Impl>(get_class());
        }
    } // namespace X509Certificate2Impl
} // namespace app::classes::types
