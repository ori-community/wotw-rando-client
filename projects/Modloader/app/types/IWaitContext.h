#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IWaitContext__Class.h>

namespace app::classes::types {
    namespace IWaitContext {
        inline app::IWaitContext__Class** type_info = (app::IWaitContext__Class**)(modloader::win::memory::resolve_rva(0x04707240));
        inline app::IWaitContext__Class* get_class() {
            return il2cpp::get_class<app::IWaitContext__Class>(type_info, "Moon.Timeline", "IWaitContext");
        }
    } // namespace IWaitContext
} // namespace app::classes::types
