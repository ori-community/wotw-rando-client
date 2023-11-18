#pragma once
#include <Modloader/app/structs/IMeshFormat.h>
#include <Modloader/app/structs/IMeshFormat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMeshFormat {
        inline app::IMeshFormat__Class** type_info() {
            static app::IMeshFormat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMeshFormat__Class**)(modloader::win::memory::resolve_rva(0x0470AD60));
            }
            return cache;
        }
        inline app::IMeshFormat__Class* get_class() {
            return il2cpp::get_class<app::IMeshFormat__Class>(type_info(), "TriangleNet.IO", "IMeshFormat");
        }
    } // namespace IMeshFormat
} // namespace app::classes::types
