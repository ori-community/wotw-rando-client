#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BasePrewarmOperation {
        namespace {
            app::BasePrewarmOperation__Class* type_info_ref = nullptr;
        }
        app::BasePrewarmOperation__Class** type_info = &type_info_ref;
        inline app::BasePrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::BasePrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "BasePrewarmOperation");
        }
        inline app::BasePrewarmOperation* create() {
            return il2cpp::create_object<app::BasePrewarmOperation>(get_class());
        }
    } // namespace BasePrewarmOperation
} // namespace app::classes::types
