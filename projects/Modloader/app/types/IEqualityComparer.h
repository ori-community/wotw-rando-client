#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IEqualityComparer__Class.h>

namespace app::classes::types {
    namespace IEqualityComparer {
        inline app::IEqualityComparer__Class** type_info = (app::IEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x047941F0));
        inline app::IEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::IEqualityComparer__Class>(type_info, "System.Collections", "IEqualityComparer");
        }
    } // namespace IEqualityComparer
} // namespace app::classes::types
