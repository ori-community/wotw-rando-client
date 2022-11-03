#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnexceptionalStreamWriter {
        inline app::UnexceptionalStreamWriter__Class** type_info = (app::UnexceptionalStreamWriter__Class**)(modloader::win::memory::resolve_rva(0x04743AE8));
        inline app::UnexceptionalStreamWriter__Class* get_class() {
            return il2cpp::get_class<app::UnexceptionalStreamWriter__Class>(type_info, "System.IO", "UnexceptionalStreamWriter");
        }
        inline app::UnexceptionalStreamWriter* create() {
            return il2cpp::create_object<app::UnexceptionalStreamWriter>(get_class());
        }
    } // namespace UnexceptionalStreamWriter
} // namespace app::classes::types
