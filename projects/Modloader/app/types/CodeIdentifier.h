#pragma once
#include <Modloader/app/structs/CodeIdentifier.h>
#include <Modloader/app/structs/CodeIdentifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CodeIdentifier {
        inline app::CodeIdentifier__Class** type_info() {
            static app::CodeIdentifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CodeIdentifier__Class**)(modloader::win::memory::resolve_rva(0x04701358));
            }
            return cache;
        }
        inline app::CodeIdentifier__Class* get_class() {
            return il2cpp::get_class<app::CodeIdentifier__Class>(type_info(), "System.Xml.Serialization", "CodeIdentifier");
        }
        inline app::CodeIdentifier* create() {
            return il2cpp::create_object<app::CodeIdentifier>(get_class());
        }
    } // namespace CodeIdentifier
} // namespace app::classes::types
