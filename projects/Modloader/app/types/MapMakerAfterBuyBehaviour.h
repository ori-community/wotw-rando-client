#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MapMakerAfterBuyBehaviour__Class.h>
#include <Modloader/app/structs/MapMakerAfterBuyBehaviour.h>

namespace app::classes::types {
    namespace MapMakerAfterBuyBehaviour {
        namespace {
            inline app::MapMakerAfterBuyBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MapMakerAfterBuyBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerAfterBuyBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerAfterBuyBehaviour__Class>(type_info, "Moon", "MapMakerAfterBuyBehaviour");
        }
        inline app::MapMakerAfterBuyBehaviour* create() {
            return il2cpp::create_object<app::MapMakerAfterBuyBehaviour>(get_class());
        }
    } // namespace MapMakerAfterBuyBehaviour
} // namespace app::classes::types
