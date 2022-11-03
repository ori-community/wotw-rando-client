#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationInfoEnumerator {
        inline app::SerializationInfoEnumerator__Class** type_info = (app::SerializationInfoEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04743A70));
        inline app::SerializationInfoEnumerator__Class* get_class() {
            return il2cpp::get_class<app::SerializationInfoEnumerator__Class>(type_info, "System.Runtime.Serialization", "SerializationInfoEnumerator");
        }
        inline app::SerializationInfoEnumerator* create() {
            return il2cpp::create_object<app::SerializationInfoEnumerator>(get_class());
        }
    } // namespace SerializationInfoEnumerator
} // namespace app::classes::types
