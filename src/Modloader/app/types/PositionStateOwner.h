#pragma once
#include <Modloader/app/structs/PositionStateOwner.h>
#include <Modloader/app/structs/PositionStateOwner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionStateOwner {
        inline app::PositionStateOwner__Class** type_info() {
            static app::PositionStateOwner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionStateOwner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionStateOwner__Class* get_class() {
            return il2cpp::get_class<app::PositionStateOwner__Class>(type_info(), "Moon", "PositionStateOwner");
        }
        inline app::PositionStateOwner* create() {
            return il2cpp::create_object<app::PositionStateOwner>(get_class());
        }
    } // namespace PositionStateOwner
} // namespace app::classes::types
