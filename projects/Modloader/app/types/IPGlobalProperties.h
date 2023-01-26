#pragma once
#include <Modloader/app/structs/IPGlobalProperties.h>
#include <Modloader/app/structs/IPGlobalProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPGlobalProperties {
        inline app::IPGlobalProperties__Class** type_info() {
            static app::IPGlobalProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPGlobalProperties__Class**)(modloader::win::memory::resolve_rva(0x0472BC00));
            }
            return cache;
        }
        inline app::IPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::IPGlobalProperties__Class>(type_info(), "System.Net.NetworkInformation", "IPGlobalProperties");
        }
        inline app::IPGlobalProperties* create() {
            return il2cpp::create_object<app::IPGlobalProperties>(get_class());
        }
    } // namespace IPGlobalProperties
} // namespace app::classes::types
