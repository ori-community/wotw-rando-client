#pragma once
#include <Modloader/app/structs/ExpandoObject_MetaExpando.h>
#include <Modloader/app/structs/ExpandoObject_MetaExpando__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject_MetaExpando {
        inline app::ExpandoObject_MetaExpando__Class** type_info() {
            static app::ExpandoObject_MetaExpando__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExpandoObject_MetaExpando__Class**)(modloader::win::memory::resolve_rva(0x04706A38));
            }
            return cache;
        }
        inline app::ExpandoObject_MetaExpando__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_MetaExpando__Class>(type_info(), "System.Dynamic", "ExpandoObject", "MetaExpando");
        }
        inline app::ExpandoObject_MetaExpando* create() {
            return il2cpp::create_object<app::ExpandoObject_MetaExpando>(get_class());
        }
    } // namespace ExpandoObject_MetaExpando
} // namespace app::classes::types
