#pragma once
#include <Modloader/app/structs/CspKeyContainerInfo.h>
#include <Modloader/app/structs/CspKeyContainerInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CspKeyContainerInfo {
        inline app::CspKeyContainerInfo__Class** type_info() {
            static app::CspKeyContainerInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CspKeyContainerInfo__Class**)(modloader::win::memory::resolve_rva(0x04760BD8));
            }
            return cache;
        }
        inline app::CspKeyContainerInfo__Class* get_class() {
            return il2cpp::get_class<app::CspKeyContainerInfo__Class>(type_info(), "System.Security.Cryptography", "CspKeyContainerInfo");
        }
        inline app::CspKeyContainerInfo* create() {
            return il2cpp::create_object<app::CspKeyContainerInfo>(get_class());
        }
    } // namespace CspKeyContainerInfo
} // namespace app::classes::types
