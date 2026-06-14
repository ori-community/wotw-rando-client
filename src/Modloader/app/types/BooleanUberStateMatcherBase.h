#pragma once
#include <Modloader/app/structs/BooleanUberStateMatcherBase.h>
#include <Modloader/app/structs/BooleanUberStateMatcherBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanUberStateMatcherBase {
        inline app::BooleanUberStateMatcherBase__Class** type_info() {
            static app::BooleanUberStateMatcherBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BooleanUberStateMatcherBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BooleanUberStateMatcherBase__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStateMatcherBase__Class>(type_info(), "", "BooleanUberStateMatcherBase");
        }
        inline app::BooleanUberStateMatcherBase* create() {
            return il2cpp::create_object<app::BooleanUberStateMatcherBase>(get_class());
        }
    } // namespace BooleanUberStateMatcherBase
} // namespace app::classes::types
