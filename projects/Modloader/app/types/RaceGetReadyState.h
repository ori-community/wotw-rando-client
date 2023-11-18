#pragma once
#include <Modloader/app/structs/RaceGetReadyState.h>
#include <Modloader/app/structs/RaceGetReadyState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceGetReadyState {
        inline app::RaceGetReadyState__Class** type_info() {
            static app::RaceGetReadyState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceGetReadyState__Class**)(modloader::win::memory::resolve_rva(0x04764C78));
            }
            return cache;
        }
        inline app::RaceGetReadyState__Class* get_class() {
            return il2cpp::get_class<app::RaceGetReadyState__Class>(type_info(), "", "RaceGetReadyState");
        }
        inline app::RaceGetReadyState* create() {
            return il2cpp::create_object<app::RaceGetReadyState>(get_class());
        }
    } // namespace RaceGetReadyState
} // namespace app::classes::types
