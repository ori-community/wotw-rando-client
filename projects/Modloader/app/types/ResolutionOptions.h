#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResolutionOptions {
        inline app::ResolutionOptions__Class** type_info = (app::ResolutionOptions__Class**)(modloader::win::memory::resolve_rva(0x0477C9B0));
        inline app::ResolutionOptions__Class* get_class() {
            return il2cpp::get_class<app::ResolutionOptions__Class>(type_info, "", "ResolutionOptions");
        }
        inline app::ResolutionOptions* create() {
            return il2cpp::create_object<app::ResolutionOptions>(get_class());
        }
    } // namespace ResolutionOptions
} // namespace app::classes::types
