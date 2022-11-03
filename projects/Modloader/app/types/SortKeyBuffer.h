#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SortKeyBuffer {
        inline app::SortKeyBuffer__Class** type_info = (app::SortKeyBuffer__Class**)(modloader::win::memory::resolve_rva(0x04708468));
        inline app::SortKeyBuffer__Class* get_class() {
            return il2cpp::get_class<app::SortKeyBuffer__Class>(type_info, "Mono.Globalization.Unicode", "SortKeyBuffer");
        }
        inline app::SortKeyBuffer* create() {
            return il2cpp::create_object<app::SortKeyBuffer>(get_class());
        }
    } // namespace SortKeyBuffer
} // namespace app::classes::types
