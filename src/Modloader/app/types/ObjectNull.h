#pragma once
#include <Modloader/app/structs/ObjectNull.h>
#include <Modloader/app/structs/ObjectNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectNull {
        inline app::ObjectNull__Class** type_info() {
            static app::ObjectNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectNull__Class**)(modloader::win::memory::resolve_rva(0x04714450));
            }
            return cache;
        }
        inline app::ObjectNull__Class* get_class() {
            return il2cpp::get_class<app::ObjectNull__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "ObjectNull");
        }
        inline app::ObjectNull* create() {
            return il2cpp::create_object<app::ObjectNull>(get_class());
        }
    } // namespace ObjectNull
} // namespace app::classes::types
