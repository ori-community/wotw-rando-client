#pragma once
#include <Modloader/app/structs/INullable.h>
#include <Modloader/app/structs/INullable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INullable {
        inline app::INullable__Class** type_info() {
            static app::INullable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INullable__Class**)(modloader::win::memory::resolve_rva(0x04750A80));
            }
            return cache;
        }
        inline app::INullable__Class* get_class() {
            return il2cpp::get_class<app::INullable__Class>(type_info(), "System.Data.SqlTypes", "INullable");
        }
    } // namespace INullable
} // namespace app::classes::types
