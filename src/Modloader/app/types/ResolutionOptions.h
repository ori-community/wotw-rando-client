#pragma once
#include <Modloader/app/structs/ResolutionOptions.h>
#include <Modloader/app/structs/ResolutionOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResolutionOptions {
        inline app::ResolutionOptions__Class** type_info() {
            static app::ResolutionOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResolutionOptions__Class**)(modloader::win::memory::resolve_rva(0x0477C9B0));
            }
            return cache;
        }
        inline app::ResolutionOptions__Class* get_class() {
            return il2cpp::get_class<app::ResolutionOptions__Class>(type_info(), "", "ResolutionOptions");
        }
        inline app::ResolutionOptions* create() {
            return il2cpp::create_object<app::ResolutionOptions>(get_class());
        }
    } // namespace ResolutionOptions
} // namespace app::classes::types
