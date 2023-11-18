#pragma once
#include <Modloader/app/structs/IWaitContext.h>
#include <Modloader/app/structs/IWaitContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWaitContext {
        inline app::IWaitContext__Class** type_info() {
            static app::IWaitContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IWaitContext__Class**)(modloader::win::memory::resolve_rva(0x04707240));
            }
            return cache;
        }
        inline app::IWaitContext__Class* get_class() {
            return il2cpp::get_class<app::IWaitContext__Class>(type_info(), "Moon.Timeline", "IWaitContext");
        }
    } // namespace IWaitContext
} // namespace app::classes::types
