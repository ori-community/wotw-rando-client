#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Encoding_DefaultEncoder {
        inline app::Encoding_DefaultEncoder__Class** type_info = (app::Encoding_DefaultEncoder__Class**)(modloader::win::memory::resolve_rva(0x04735CB0));
        inline app::Encoding_DefaultEncoder__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_DefaultEncoder__Class>(type_info, "System.Text", "Encoding", "DefaultEncoder");
        }
        inline app::Encoding_DefaultEncoder* create() {
            return il2cpp::create_object<app::Encoding_DefaultEncoder>(get_class());
        }
    } // namespace Encoding_DefaultEncoder
} // namespace app::classes::types
