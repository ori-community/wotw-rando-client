#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Flare__Class.h>
#include <Modloader/app/structs/Flare.h>

namespace app::classes::types {
    namespace Flare {
        namespace {
            inline app::Flare__Class* type_info_ref = nullptr;
        }
        inline app::Flare__Class** type_info = &type_info_ref;
        inline app::Flare__Class* get_class() {
            return il2cpp::get_class<app::Flare__Class>(type_info, "UnityEngine", "Flare");
        }
        inline app::Flare* create() {
            return il2cpp::create_object<app::Flare>(get_class());
        }
    } // namespace Flare
} // namespace app::classes::types
