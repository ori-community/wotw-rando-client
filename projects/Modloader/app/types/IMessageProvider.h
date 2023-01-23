#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMessageProvider__Class.h>

namespace app::classes::types {
    namespace IMessageProvider {
        inline app::IMessageProvider__Class** type_info = (app::IMessageProvider__Class**)(modloader::win::memory::resolve_rva(0x047075F8));
        inline app::IMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::IMessageProvider__Class>(type_info, "Moon.InteractionGraph", "IMessageProvider");
        }
    } // namespace IMessageProvider
} // namespace app::classes::types
