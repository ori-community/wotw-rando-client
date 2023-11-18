#pragma once
#include <Modloader/app/structs/ClientInformationProvider.h>
#include <Modloader/app/structs/ClientInformationProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientInformationProvider {
        inline app::ClientInformationProvider__Class** type_info() {
            static app::ClientInformationProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClientInformationProvider__Class**)(modloader::win::memory::resolve_rva(0x04713868));
            }
            return cache;
        }
        inline app::ClientInformationProvider__Class* get_class() {
            return il2cpp::get_class<app::ClientInformationProvider__Class>(type_info(), "", "ClientInformationProvider");
        }
        inline app::ClientInformationProvider* create() {
            return il2cpp::create_object<app::ClientInformationProvider>(get_class());
        }
    } // namespace ClientInformationProvider
} // namespace app::classes::types
