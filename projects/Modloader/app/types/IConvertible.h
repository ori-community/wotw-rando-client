#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IConvertible__Class.h>

namespace app::classes::types {
    namespace IConvertible {
        inline app::IConvertible__Class** type_info = (app::IConvertible__Class**)(modloader::win::memory::resolve_rva(0x0470FB60));
        inline app::IConvertible__Class* get_class() {
            return il2cpp::get_class<app::IConvertible__Class>(type_info, "System", "IConvertible");
        }
    } // namespace IConvertible
} // namespace app::classes::types
