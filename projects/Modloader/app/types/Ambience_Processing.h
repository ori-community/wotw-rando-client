#pragma once
#include <Modloader/app/structs/Ambience_Processing.h>
#include <Modloader/app/structs/Ambience_Processing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ambience_Processing {
        inline app::Ambience_Processing__Class** type_info() {
            static app::Ambience_Processing__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ambience_Processing__Class**)(modloader::win::memory::resolve_rva(0x0472F5B8));
            }
            return cache;
        }
        inline app::Ambience_Processing__Class* get_class() {
            return il2cpp::get_nested_class<app::Ambience_Processing__Class>(type_info(), "Core", "Ambience", "Processing");
        }
        inline app::Ambience_Processing* create() {
            return il2cpp::create_object<app::Ambience_Processing>(get_class());
        }
    } // namespace Ambience_Processing
} // namespace app::classes::types
