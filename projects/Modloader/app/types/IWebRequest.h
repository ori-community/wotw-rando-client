#pragma once
#include <Modloader/app/structs/IWebRequest.h>
#include <Modloader/app/structs/IWebRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWebRequest {
        inline app::IWebRequest__Class** type_info() {
            static app::IWebRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IWebRequest__Class**)(modloader::win::memory::resolve_rva(0x0478F128));
            }
            return cache;
        }
        inline app::IWebRequest__Class* get_class() {
            return il2cpp::get_class<app::IWebRequest__Class>(type_info(), "Moon.Network.Web", "IWebRequest");
        }
    } // namespace IWebRequest
} // namespace app::classes::types
