#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OutputWriter {
        inline app::OutputWriter__Class** type_info = (app::OutputWriter__Class**)(modloader::win::memory::resolve_rva(0x04774560));
        inline app::OutputWriter__Class* get_class() {
            return il2cpp::get_class<app::OutputWriter__Class>(type_info, "", "OutputWriter");
        }
        inline app::OutputWriter* create() {
            return il2cpp::create_object<app::OutputWriter>(get_class());
        }
    } // namespace OutputWriter
} // namespace app::classes::types
