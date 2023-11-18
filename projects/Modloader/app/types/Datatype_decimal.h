#pragma once
#include <Modloader/app/structs/Datatype_decimal.h>
#include <Modloader/app/structs/Datatype_decimal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_decimal {
        inline app::Datatype_decimal__Class** type_info() {
            static app::Datatype_decimal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_decimal__Class**)(modloader::win::memory::resolve_rva(0x04783EA0));
            }
            return cache;
        }
        inline app::Datatype_decimal__Class* get_class() {
            return il2cpp::get_class<app::Datatype_decimal__Class>(type_info(), "System.Xml.Schema", "Datatype_decimal");
        }
        inline app::Datatype_decimal* create() {
            return il2cpp::create_object<app::Datatype_decimal>(get_class());
        }
    } // namespace Datatype_decimal
} // namespace app::classes::types
