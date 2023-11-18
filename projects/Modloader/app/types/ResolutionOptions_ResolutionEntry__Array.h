#pragma once
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry__Array.h>
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResolutionOptions_ResolutionEntry__Array {
        inline app::ResolutionOptions_ResolutionEntry__Array__Class** type_info() {
            static app::ResolutionOptions_ResolutionEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResolutionOptions_ResolutionEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResolutionOptions_ResolutionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ResolutionOptions_ResolutionEntry__Array__Class>(type_info(), "", "ResolutionOptions+ResolutionEntry[]");
        }
        inline app::ResolutionOptions_ResolutionEntry__Array* create() {
            return il2cpp::create_object<app::ResolutionOptions_ResolutionEntry__Array>(get_class());
        }
    } // namespace ResolutionOptions_ResolutionEntry__Array
} // namespace app::classes::types
