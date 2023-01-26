#pragma once
#include <Modloader/app/structs/ExpandoObject.h>
#include <Modloader/app/structs/ExpandoObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject {
        inline app::ExpandoObject__Class** type_info() {
            static app::ExpandoObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExpandoObject__Class**)(modloader::win::memory::resolve_rva(0x0473BA70));
            }
            return cache;
        }
        inline app::ExpandoObject__Class* get_class() {
            return il2cpp::get_class<app::ExpandoObject__Class>(type_info(), "System.Dynamic", "ExpandoObject");
        }
        inline app::ExpandoObject* create() {
            return il2cpp::create_object<app::ExpandoObject>(get_class());
        }
    } // namespace ExpandoObject
} // namespace app::classes::types
