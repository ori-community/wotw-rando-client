#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClientInformationProvider__Class.h>
#include <Modloader/app/structs/ClientInformationProvider.h>

namespace app::classes::types {
    namespace ClientInformationProvider {
        inline app::ClientInformationProvider__Class** type_info = (app::ClientInformationProvider__Class**)(modloader::win::memory::resolve_rva(0x04713868));
        inline app::ClientInformationProvider__Class* get_class() {
            return il2cpp::get_class<app::ClientInformationProvider__Class>(type_info, "", "ClientInformationProvider");
        }
        inline app::ClientInformationProvider* create() {
            return il2cpp::create_object<app::ClientInformationProvider>(get_class());
        }
    } // namespace ClientInformationProvider
} // namespace app::classes::types
