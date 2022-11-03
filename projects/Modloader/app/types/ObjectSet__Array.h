#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectSet__Array {
        namespace {
            inline app::ObjectSet__Array__Class* type_info_ref = nullptr;
        }
        inline app::ObjectSet__Array__Class** type_info = &type_info_ref;
        inline app::ObjectSet__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectSet__Array__Class>(type_info, "PlayFab.PlayStreamModels", "ObjectSet[]");
        }
        inline app::ObjectSet__Array* create() {
            return il2cpp::create_object<app::ObjectSet__Array>(get_class());
        }
    } // namespace ObjectSet__Array
} // namespace app::classes::types
