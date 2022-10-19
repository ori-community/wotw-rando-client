#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_unsignedByte {
        inline app::Datatype_unsignedByte__Class** type_info = (app::Datatype_unsignedByte__Class**)(modloader::win::memory::resolve_rva(0x04747390));
        inline app::Datatype_unsignedByte__Class* get_class() {
            return il2cpp::get_class<app::Datatype_unsignedByte__Class>(type_info, "System.Xml.Schema", "Datatype_unsignedByte");
        }
        inline app::Datatype_unsignedByte* create() {
            return il2cpp::create_object<app::Datatype_unsignedByte>(get_class());
        }
    } // namespace Datatype_unsignedByte
} // namespace app::classes::types
