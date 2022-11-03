#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapMakerDidNotBuyBehaviour {
        namespace {
            inline app::MapMakerDidNotBuyBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MapMakerDidNotBuyBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerDidNotBuyBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerDidNotBuyBehaviour__Class>(type_info, "Moon", "MapMakerDidNotBuyBehaviour");
        }
        inline app::MapMakerDidNotBuyBehaviour* create() {
            return il2cpp::create_object<app::MapMakerDidNotBuyBehaviour>(get_class());
        }
    } // namespace MapMakerDidNotBuyBehaviour
} // namespace app::classes::types
