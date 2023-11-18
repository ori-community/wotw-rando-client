#pragma once
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IMoonTypeResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonTypeResolver {
        inline app::IMoonTypeResolver__Class** type_info() {
            static app::IMoonTypeResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonTypeResolver__Class**)(modloader::win::memory::resolve_rva(0x0471A9C0));
            }
            return cache;
        }
        inline app::IMoonTypeResolver__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeResolver__Class>(type_info(), "Moon", "IMoonTypeResolver");
        }
    } // namespace IMoonTypeResolver
} // namespace app::classes::types
