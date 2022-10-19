#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XStreamingElement {
        inline app::XStreamingElement__Class** type_info = (app::XStreamingElement__Class**)(modloader::win::memory::resolve_rva(0x04781C90));
        inline app::XStreamingElement__Class* get_class() {
            return il2cpp::get_class<app::XStreamingElement__Class>(type_info, "System.Xml.Linq", "XStreamingElement");
        }
        inline app::XStreamingElement* create() {
            return il2cpp::create_object<app::XStreamingElement>(get_class());
        }
    } // namespace XStreamingElement
} // namespace app::classes::types
