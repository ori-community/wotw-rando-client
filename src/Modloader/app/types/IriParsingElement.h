#pragma once
#include <Modloader/app/structs/IriParsingElement.h>
#include <Modloader/app/structs/IriParsingElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IriParsingElement {
        inline app::IriParsingElement__Class** type_info() {
            static app::IriParsingElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IriParsingElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IriParsingElement__Class* get_class() {
            return il2cpp::get_class<app::IriParsingElement__Class>(type_info(), "System.Configuration", "IriParsingElement");
        }
        inline app::IriParsingElement* create() {
            return il2cpp::create_object<app::IriParsingElement>(get_class());
        }
    } // namespace IriParsingElement
} // namespace app::classes::types
