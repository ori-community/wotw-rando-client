#pragma once
#include <Modloader/app/structs/IAnimatorPostprocessBase.h>
#include <Modloader/app/structs/IAnimatorPostprocessBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAnimatorPostprocessBase {
        inline app::IAnimatorPostprocessBase__Class** type_info() {
            static app::IAnimatorPostprocessBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAnimatorPostprocessBase__Class**)(modloader::win::memory::resolve_rva(0x0475CE00));
            }
            return cache;
        }
        inline app::IAnimatorPostprocessBase__Class* get_class() {
            return il2cpp::get_class<app::IAnimatorPostprocessBase__Class>(type_info(), "Moon", "IAnimatorPostprocessBase");
        }
    } // namespace IAnimatorPostprocessBase
} // namespace app::classes::types
