#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry__Array__Class.h>
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry__Array.h>

namespace app::classes::types {
    namespace ResolutionOptions_ResolutionEntry__Array {
        namespace {
            inline app::ResolutionOptions_ResolutionEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::ResolutionOptions_ResolutionEntry__Array__Class** type_info = &type_info_ref;
        inline app::ResolutionOptions_ResolutionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ResolutionOptions_ResolutionEntry__Array__Class>(type_info, "", "ResolutionOptions+ResolutionEntry[]");
        }
        inline app::ResolutionOptions_ResolutionEntry__Array* create() {
            return il2cpp::create_object<app::ResolutionOptions_ResolutionEntry__Array>(get_class());
        }
    } // namespace ResolutionOptions_ResolutionEntry__Array
} // namespace app::classes::types
