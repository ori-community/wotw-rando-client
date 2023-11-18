#pragma once
#include <Modloader/app/structs/GameSystemsEnabler.h>
#include <Modloader/app/structs/GameSystemsEnabler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameSystemsEnabler {
        inline app::GameSystemsEnabler__Class** type_info() {
            static app::GameSystemsEnabler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameSystemsEnabler__Class**)(modloader::win::memory::resolve_rva(0x04760010));
            }
            return cache;
        }
        inline app::GameSystemsEnabler__Class* get_class() {
            return il2cpp::get_class<app::GameSystemsEnabler__Class>(type_info(), "", "GameSystemsEnabler");
        }
        inline app::GameSystemsEnabler* create() {
            return il2cpp::create_object<app::GameSystemsEnabler>(get_class());
        }
    } // namespace GameSystemsEnabler
} // namespace app::classes::types
