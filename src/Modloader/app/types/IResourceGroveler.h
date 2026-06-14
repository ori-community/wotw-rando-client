#pragma once
#include <Modloader/app/structs/IResourceGroveler.h>
#include <Modloader/app/structs/IResourceGroveler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IResourceGroveler {
        inline app::IResourceGroveler__Class** type_info() {
            static app::IResourceGroveler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IResourceGroveler__Class**)(modloader::win::memory::resolve_rva(0x0470FD10));
            }
            return cache;
        }
        inline app::IResourceGroveler__Class* get_class() {
            return il2cpp::get_class<app::IResourceGroveler__Class>(type_info(), "System.Resources", "IResourceGroveler");
        }
    } // namespace IResourceGroveler
} // namespace app::classes::types
