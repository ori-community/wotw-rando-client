#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeySequence {
        inline app::KeySequence__Class** type_info = (app::KeySequence__Class**)(modloader::win::memory::resolve_rva(0x04785288));
        inline app::KeySequence__Class* get_class() {
            return il2cpp::get_class<app::KeySequence__Class>(type_info, "System.Xml.Schema", "KeySequence");
        }
        inline app::KeySequence* create() {
            return il2cpp::create_object<app::KeySequence>(get_class());
        }
    } // namespace KeySequence
} // namespace app::classes::types
