#pragma once
#include <Modloader/app/structs/ScenesToSkip.h>
#include <Modloader/app/structs/ScenesToSkip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesToSkip {
        inline app::ScenesToSkip__Class** type_info() {
            static app::ScenesToSkip__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesToSkip__Class**)(modloader::win::memory::resolve_rva(0x04732D30));
            }
            return cache;
        }
        inline app::ScenesToSkip__Class* get_class() {
            return il2cpp::get_class<app::ScenesToSkip__Class>(type_info(), "", "ScenesToSkip");
        }
        inline app::ScenesToSkip* create() {
            return il2cpp::create_object<app::ScenesToSkip>(get_class());
        }
    } // namespace ScenesToSkip
} // namespace app::classes::types
