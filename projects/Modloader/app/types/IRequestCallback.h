#pragma once
#include <Modloader/app/structs/IRequestCallback.h>
#include <Modloader/app/structs/IRequestCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRequestCallback {
        inline app::IRequestCallback__Class** type_info() {
            static app::IRequestCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRequestCallback__Class**)(modloader::win::memory::resolve_rva(0x04798088));
            }
            return cache;
        }
        inline app::IRequestCallback__Class* get_class() {
            return il2cpp::get_class<app::IRequestCallback__Class>(type_info(), "Moon.Network.Web", "IRequestCallback");
        }
    } // namespace IRequestCallback
} // namespace app::classes::types
