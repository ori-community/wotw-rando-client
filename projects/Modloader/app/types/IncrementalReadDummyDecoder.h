#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IncrementalReadDummyDecoder {
        inline app::IncrementalReadDummyDecoder__Class** type_info = (app::IncrementalReadDummyDecoder__Class**)(modloader::win::memory::resolve_rva(0x0478E820));
        inline app::IncrementalReadDummyDecoder__Class* get_class() {
            return il2cpp::get_class<app::IncrementalReadDummyDecoder__Class>(type_info, "System.Xml", "IncrementalReadDummyDecoder");
        }
        inline app::IncrementalReadDummyDecoder* create() {
            return il2cpp::create_object<app::IncrementalReadDummyDecoder>(get_class());
        }
    } // namespace IncrementalReadDummyDecoder
} // namespace app::classes::types
