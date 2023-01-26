#pragma once
#include <Modloader/app/structs/Datatype_normalizedString.h>
#include <Modloader/app/structs/Datatype_normalizedString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_normalizedString {
        inline app::Datatype_normalizedString__Class** type_info() {
            static app::Datatype_normalizedString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_normalizedString__Class**)(modloader::win::memory::resolve_rva(0x047606A0));
            }
            return cache;
        }
        inline app::Datatype_normalizedString__Class* get_class() {
            return il2cpp::get_class<app::Datatype_normalizedString__Class>(type_info(), "System.Xml.Schema", "Datatype_normalizedString");
        }
        inline app::Datatype_normalizedString* create() {
            return il2cpp::create_object<app::Datatype_normalizedString>(get_class());
        }
    } // namespace Datatype_normalizedString
} // namespace app::classes::types
