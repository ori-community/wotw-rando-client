#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IArgumentProvider__Class.h>

namespace app::classes::types {
    namespace IArgumentProvider {
        inline app::IArgumentProvider__Class** type_info = (app::IArgumentProvider__Class**)(modloader::win::memory::resolve_rva(0x0470B5D8));
        inline app::IArgumentProvider__Class* get_class() {
            return il2cpp::get_class<app::IArgumentProvider__Class>(type_info, "System.Linq.Expressions", "IArgumentProvider");
        }
    } // namespace IArgumentProvider
} // namespace app::classes::types
