#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryCompatibility_1 {
        inline app::BinaryCompatibility_1__Class** type_info = (app::BinaryCompatibility_1__Class**)(modloader::win::memory::resolve_rva(0x047284D0));
        inline app::BinaryCompatibility_1__Class* get_class() {
            return il2cpp::get_class<app::BinaryCompatibility_1__Class>(type_info, "System.Xml", "BinaryCompatibility");
        }
        inline app::BinaryCompatibility_1* create() {
            return il2cpp::create_object<app::BinaryCompatibility_1>(get_class());
        }
    } // namespace BinaryCompatibility_1
} // namespace app::classes::types
