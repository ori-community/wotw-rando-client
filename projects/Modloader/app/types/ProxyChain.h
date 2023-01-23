#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProxyChain__Class.h>
#include <Modloader/app/structs/ProxyChain.h>

namespace app::classes::types {
    namespace ProxyChain {
        namespace {
            inline app::ProxyChain__Class* type_info_ref = nullptr;
        }
        inline app::ProxyChain__Class** type_info = &type_info_ref;
        inline app::ProxyChain__Class* get_class() {
            return il2cpp::get_class<app::ProxyChain__Class>(type_info, "System.Net", "ProxyChain");
        }
        inline app::ProxyChain* create() {
            return il2cpp::create_object<app::ProxyChain>(get_class());
        }
    } // namespace ProxyChain
} // namespace app::classes::types
