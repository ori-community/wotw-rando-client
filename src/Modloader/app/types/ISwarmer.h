#pragma once
#include <Modloader/app/structs/ISwarmer.h>
#include <Modloader/app/structs/ISwarmer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISwarmer {
        inline app::ISwarmer__Class** type_info() {
            static app::ISwarmer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISwarmer__Class**)(modloader::win::memory::resolve_rva(0x0471DAE0));
            }
            return cache;
        }
        inline app::ISwarmer__Class* get_class() {
            return il2cpp::get_class<app::ISwarmer__Class>(type_info(), "", "ISwarmer");
        }
    } // namespace ISwarmer
} // namespace app::classes::types
