#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IriParsingElement {
        namespace {
            inline app::IriParsingElement__Class* type_info_ref = nullptr;
        }
        inline app::IriParsingElement__Class** type_info = &type_info_ref;
        inline app::IriParsingElement__Class* get_class() {
            return il2cpp::get_class<app::IriParsingElement__Class>(type_info, "System.Configuration", "IriParsingElement");
        }
        inline app::IriParsingElement* create() {
            return il2cpp::create_object<app::IriParsingElement>(get_class());
        }
    } // namespace IriParsingElement
} // namespace app::classes::types
