#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResolutionOptions_ResolutionComparer {
        inline app::ResolutionOptions_ResolutionComparer__Class** type_info = (app::ResolutionOptions_ResolutionComparer__Class**)(modloader::win::memory::resolve_rva(0x0474ACE8));
        inline app::ResolutionOptions_ResolutionComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::ResolutionOptions_ResolutionComparer__Class>(type_info, "", "ResolutionOptions", "ResolutionComparer");
        }
        inline app::ResolutionOptions_ResolutionComparer* create() {
            return il2cpp::create_object<app::ResolutionOptions_ResolutionComparer>(get_class());
        }
    } // namespace ResolutionOptions_ResolutionComparer
} // namespace app::classes::types
