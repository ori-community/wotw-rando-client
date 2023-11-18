#pragma once
#include <Modloader/app/structs/PoolAnalyzeToggler.h>
#include <Modloader/app/structs/PoolAnalyzeToggler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoolAnalyzeToggler {
        inline app::PoolAnalyzeToggler__Class** type_info() {
            static app::PoolAnalyzeToggler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoolAnalyzeToggler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoolAnalyzeToggler__Class* get_class() {
            return il2cpp::get_class<app::PoolAnalyzeToggler__Class>(type_info(), "", "PoolAnalyzeToggler");
        }
        inline app::PoolAnalyzeToggler* create() {
            return il2cpp::create_object<app::PoolAnalyzeToggler>(get_class());
        }
    } // namespace PoolAnalyzeToggler
} // namespace app::classes::types
