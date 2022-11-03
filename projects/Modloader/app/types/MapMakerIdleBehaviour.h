#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapMakerIdleBehaviour {
        namespace {
            inline app::MapMakerIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MapMakerIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerIdleBehaviour__Class>(type_info, "Moon", "MapMakerIdleBehaviour");
        }
        inline app::MapMakerIdleBehaviour* create() {
            return il2cpp::create_object<app::MapMakerIdleBehaviour>(get_class());
        }
    } // namespace MapMakerIdleBehaviour
} // namespace app::classes::types
