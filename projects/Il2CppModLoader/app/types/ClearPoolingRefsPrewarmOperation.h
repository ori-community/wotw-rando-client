#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClearPoolingRefsPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClearPoolingRefsPrewarmOperation__Class** type_info;
        inline app::ClearPoolingRefsPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::ClearPoolingRefsPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "ClearPoolingRefsPrewarmOperation");
        }
        inline app::ClearPoolingRefsPrewarmOperation* create() {
            return il2cpp::create_object<app::ClearPoolingRefsPrewarmOperation>(get_class());
        }
    } // namespace ClearPoolingRefsPrewarmOperation
} // namespace app::classes::types
