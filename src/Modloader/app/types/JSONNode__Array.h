#pragma once
#include <Modloader/app/structs/JSONNode__Array.h>
#include <Modloader/app/structs/JSONNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JSONNode__Array {
        inline app::JSONNode__Array__Class** type_info() {
            static app::JSONNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JSONNode__Array__Class**)(modloader::win::memory::resolve_rva(0x0473D1E8));
            }
            return cache;
        }
        inline app::JSONNode__Array__Class* get_class() {
            return il2cpp::get_class<app::JSONNode__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "JSONNode[]");
        }
        inline app::JSONNode__Array* create() {
            return il2cpp::create_object<app::JSONNode__Array>(get_class());
        }
    } // namespace JSONNode__Array
} // namespace app::classes::types
