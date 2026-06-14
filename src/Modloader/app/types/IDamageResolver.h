#pragma once
#include <Modloader/app/structs/IDamageResolver.h>
#include <Modloader/app/structs/IDamageResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDamageResolver {
        inline app::IDamageResolver__Class** type_info() {
            static app::IDamageResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDamageResolver__Class**)(modloader::win::memory::resolve_rva(0x04775B68));
            }
            return cache;
        }
        inline app::IDamageResolver__Class* get_class() {
            return il2cpp::get_class<app::IDamageResolver__Class>(type_info(), "Moon", "IDamageResolver");
        }
    } // namespace IDamageResolver
} // namespace app::classes::types
