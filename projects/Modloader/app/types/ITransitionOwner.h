#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITransitionOwner__Class.h>

namespace app::classes::types {
    namespace ITransitionOwner {
        inline app::ITransitionOwner__Class** type_info = (app::ITransitionOwner__Class**)(modloader::win::memory::resolve_rva(0x04759680));
        inline app::ITransitionOwner__Class* get_class() {
            return il2cpp::get_class<app::ITransitionOwner__Class>(type_info, "Moon", "ITransitionOwner");
        }
    } // namespace ITransitionOwner
} // namespace app::classes::types
