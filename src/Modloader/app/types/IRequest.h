#pragma once
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/IRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRequest {
        inline app::IRequest__Class** type_info() {
            static app::IRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRequest__Class**)(modloader::win::memory::resolve_rva(0x04721A68));
            }
            return cache;
        }
        inline app::IRequest__Class* get_class() {
            return il2cpp::get_class<app::IRequest__Class>(type_info(), "Moon.Network.Web", "IRequest");
        }
    } // namespace IRequest
} // namespace app::classes::types
