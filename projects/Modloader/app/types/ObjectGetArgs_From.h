#pragma once
#include <Modloader/app/structs/ObjectGetArgs_From.h>
#include <Modloader/app/structs/ObjectGetArgs_From__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectGetArgs_From {
        inline app::ObjectGetArgs_From__Class** type_info() {
            static app::ObjectGetArgs_From__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectGetArgs_From__Class**)(modloader::win::memory::resolve_rva(0x04715590));
            }
            return cache;
        }
        inline app::ObjectGetArgs_From__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectGetArgs_From__Class>(type_info(), "", "ObjectGetArgs", "From");
        }
        inline app::ObjectGetArgs_From* create() {
            return il2cpp::create_object<app::ObjectGetArgs_From>(get_class());
        }
    } // namespace ObjectGetArgs_From
} // namespace app::classes::types
