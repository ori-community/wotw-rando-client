#pragma once
#include <Modloader/app/structs/Datatype_token.h>
#include <Modloader/app/structs/Datatype_token__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_token {
        inline app::Datatype_token__Class** type_info() {
            static app::Datatype_token__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_token__Class**)(modloader::win::memory::resolve_rva(0x0475CF78));
            }
            return cache;
        }
        inline app::Datatype_token__Class* get_class() {
            return il2cpp::get_class<app::Datatype_token__Class>(type_info(), "System.Xml.Schema", "Datatype_token");
        }
        inline app::Datatype_token* create() {
            return il2cpp::create_object<app::Datatype_token>(get_class());
        }
    } // namespace Datatype_token
} // namespace app::classes::types
