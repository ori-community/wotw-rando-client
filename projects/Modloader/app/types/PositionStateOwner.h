#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionStateOwner {
        namespace {
            inline app::PositionStateOwner__Class* type_info_ref = nullptr;
        }
        inline app::PositionStateOwner__Class** type_info = &type_info_ref;
        inline app::PositionStateOwner__Class* get_class() {
            return il2cpp::get_class<app::PositionStateOwner__Class>(type_info, "Moon", "PositionStateOwner");
        }
        inline app::PositionStateOwner* create() {
            return il2cpp::create_object<app::PositionStateOwner>(get_class());
        }
    } // namespace PositionStateOwner
} // namespace app::classes::types
