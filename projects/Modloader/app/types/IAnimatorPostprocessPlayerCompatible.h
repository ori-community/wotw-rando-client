#pragma once
#include <Modloader/app/structs/IAnimatorPostprocessPlayerCompatible.h>
#include <Modloader/app/structs/IAnimatorPostprocessPlayerCompatible__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAnimatorPostprocessPlayerCompatible {
        inline app::IAnimatorPostprocessPlayerCompatible__Class** type_info() {
            static app::IAnimatorPostprocessPlayerCompatible__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAnimatorPostprocessPlayerCompatible__Class**)(modloader::win::memory::resolve_rva(0x04744390));
            }
            return cache;
        }
        inline app::IAnimatorPostprocessPlayerCompatible__Class* get_class() {
            return il2cpp::get_class<app::IAnimatorPostprocessPlayerCompatible__Class>(type_info(), "Moon.Animation", "IAnimatorPostprocessPlayerCompatible");
        }
    } // namespace IAnimatorPostprocessPlayerCompatible
} // namespace app::classes::types
