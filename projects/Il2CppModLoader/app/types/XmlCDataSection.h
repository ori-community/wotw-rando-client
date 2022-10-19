#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlCDataSection {
        inline app::XmlCDataSection__Class** type_info = (app::XmlCDataSection__Class**)(modloader::win::memory::resolve_rva(0x047116A8));
        inline app::XmlCDataSection__Class* get_class() {
            return il2cpp::get_class<app::XmlCDataSection__Class>(type_info, "System.Xml", "XmlCDataSection");
        }
        inline app::XmlCDataSection* create() {
            return il2cpp::create_object<app::XmlCDataSection>(get_class());
        }
    } // namespace XmlCDataSection
} // namespace app::classes::types
