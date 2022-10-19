#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWaitContext {
        inline app::IWaitContext__Class** type_info = (app::IWaitContext__Class**)(modloader::win::memory::resolve_rva(0x04707240));
        inline app::IWaitContext__Class* get_class() {
            return il2cpp::get_class<app::IWaitContext__Class>(type_info, "Moon.Timeline", "IWaitContext");
        }
    } // namespace IWaitContext
} // namespace app::classes::types
