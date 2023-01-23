#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDamageResolver__Class.h>

namespace app::classes::types {
    namespace IDamageResolver {
        inline app::IDamageResolver__Class** type_info = (app::IDamageResolver__Class**)(modloader::win::memory::resolve_rva(0x04775B68));
        inline app::IDamageResolver__Class* get_class() {
            return il2cpp::get_class<app::IDamageResolver__Class>(type_info, "Moon", "IDamageResolver");
        }
    } // namespace IDamageResolver
} // namespace app::classes::types
