#pragma once
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/IMoonResolverContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonResolverContext {
        inline app::IMoonResolverContext__Class** type_info() {
            static app::IMoonResolverContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IMoonResolverContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IMoonResolverContext__Class* get_class() {
            return il2cpp::get_class<app::IMoonResolverContext__Class>(type_info(), "Moon", "IMoonResolverContext");
        }
    } // namespace IMoonResolverContext
} // namespace app::classes::types
