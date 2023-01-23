#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ResolutionOptions_c__Class.h>
#include <Modloader/app/structs/ResolutionOptions_c.h>

namespace app::classes::types {
    namespace ResolutionOptions_c {
        inline app::ResolutionOptions_c__Class** type_info = (app::ResolutionOptions_c__Class**)(modloader::win::memory::resolve_rva(0x04740910));
        inline app::ResolutionOptions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ResolutionOptions_c__Class>(type_info, "", "ResolutionOptions", "<>c");
        }
        inline app::ResolutionOptions_c* create() {
            return il2cpp::create_object<app::ResolutionOptions_c>(get_class());
        }
    } // namespace ResolutionOptions_c
} // namespace app::classes::types
