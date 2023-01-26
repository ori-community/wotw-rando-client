#pragma once
#include <Modloader/app/structs/IPrewarmOperation__Array.h>
#include <Modloader/app/structs/IPrewarmOperation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPrewarmOperation__Array {
        inline app::IPrewarmOperation__Array__Class** type_info() {
            static app::IPrewarmOperation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPrewarmOperation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPrewarmOperation__Array__Class* get_class() {
            return il2cpp::get_class<app::IPrewarmOperation__Array__Class>(type_info(), "frameworks.loading.Prewarmers", "IPrewarmOperation[]");
        }
        inline app::IPrewarmOperation__Array* create() {
            return il2cpp::create_object<app::IPrewarmOperation__Array>(get_class());
        }
    } // namespace IPrewarmOperation__Array
} // namespace app::classes::types
