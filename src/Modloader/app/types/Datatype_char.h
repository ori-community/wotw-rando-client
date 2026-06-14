#pragma once
#include <Modloader/app/structs/Datatype_char.h>
#include <Modloader/app/structs/Datatype_char__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_char {
        inline app::Datatype_char__Class** type_info() {
            static app::Datatype_char__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_char__Class**)(modloader::win::memory::resolve_rva(0x0471E148));
            }
            return cache;
        }
        inline app::Datatype_char__Class* get_class() {
            return il2cpp::get_class<app::Datatype_char__Class>(type_info(), "System.Xml.Schema", "Datatype_char");
        }
        inline app::Datatype_char* create() {
            return il2cpp::create_object<app::Datatype_char>(get_class());
        }
    } // namespace Datatype_char
} // namespace app::classes::types
