#pragma once
#include <Modloader/app/structs/TypedObject__Array.h>
#include <Modloader/app/structs/TypedObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypedObject__Array {
        inline app::TypedObject__Array__Class** type_info() {
            static app::TypedObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypedObject__Array__Class**)(modloader::win::memory::resolve_rva(0x0477CCB0));
            }
            return cache;
        }
        inline app::TypedObject__Array__Class* get_class() {
            return il2cpp::get_class<app::TypedObject__Array__Class>(type_info(), "System.Xml.Schema", "TypedObject[]");
        }
        inline app::TypedObject__Array* create() {
            return il2cpp::create_object<app::TypedObject__Array>(get_class());
        }
    } // namespace TypedObject__Array
} // namespace app::classes::types
