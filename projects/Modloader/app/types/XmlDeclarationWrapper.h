#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlDeclarationWrapper__Class.h>
#include <Modloader/app/structs/XmlDeclarationWrapper.h>

namespace app::classes::types {
    namespace XmlDeclarationWrapper {
        inline app::XmlDeclarationWrapper__Class** type_info = (app::XmlDeclarationWrapper__Class**)(modloader::win::memory::resolve_rva(0x0471CA90));
        inline app::XmlDeclarationWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlDeclarationWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XmlDeclarationWrapper");
        }
        inline app::XmlDeclarationWrapper* create() {
            return il2cpp::create_object<app::XmlDeclarationWrapper>(get_class());
        }
    } // namespace XmlDeclarationWrapper
} // namespace app::classes::types
