#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdValidatingReader {
        inline app::XsdValidatingReader__Class** type_info = (app::XsdValidatingReader__Class**)(modloader::win::memory::resolve_rva(0x0472B9B8));
        inline app::XsdValidatingReader__Class* get_class() {
            return il2cpp::get_class<app::XsdValidatingReader__Class>(type_info, "System.Xml", "XsdValidatingReader");
        }
        inline app::XsdValidatingReader* create() {
            return il2cpp::create_object<app::XsdValidatingReader>(get_class());
        }
    } // namespace XsdValidatingReader
} // namespace app::classes::types
