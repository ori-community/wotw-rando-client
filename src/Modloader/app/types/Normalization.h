#pragma once
#include <Modloader/app/structs/Normalization.h>
#include <Modloader/app/structs/Normalization__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Normalization {
        inline app::Normalization__Class** type_info() {
            static app::Normalization__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Normalization__Class**)(modloader::win::memory::resolve_rva(0x047682D8));
            }
            return cache;
        }
        inline app::Normalization__Class* get_class() {
            return il2cpp::get_class<app::Normalization__Class>(type_info(), "System.Text", "Normalization");
        }
        inline app::Normalization* create() {
            return il2cpp::create_object<app::Normalization>(get_class());
        }
    } // namespace Normalization
} // namespace app::classes::types
