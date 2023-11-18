#pragma once
#include <Modloader/app/structs/Datatype_union.h>
#include <Modloader/app/structs/Datatype_union__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_union {
        inline app::Datatype_union__Class** type_info() {
            static app::Datatype_union__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_union__Class**)(modloader::win::memory::resolve_rva(0x04776020));
            }
            return cache;
        }
        inline app::Datatype_union__Class* get_class() {
            return il2cpp::get_class<app::Datatype_union__Class>(type_info(), "System.Xml.Schema", "Datatype_union");
        }
        inline app::Datatype_union* create() {
            return il2cpp::create_object<app::Datatype_union>(get_class());
        }
    } // namespace Datatype_union
} // namespace app::classes::types
