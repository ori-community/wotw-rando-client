#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EarlyZDelayedUnhide__Class.h>
#include <Modloader/app/structs/EarlyZDelayedUnhide.h>

namespace app::classes::types {
    namespace EarlyZDelayedUnhide {
        inline app::EarlyZDelayedUnhide__Class** type_info = (app::EarlyZDelayedUnhide__Class**)(modloader::win::memory::resolve_rva(0x0472BF18));
        inline app::EarlyZDelayedUnhide__Class* get_class() {
            return il2cpp::get_class<app::EarlyZDelayedUnhide__Class>(type_info, "Moon.Rendering", "EarlyZDelayedUnhide");
        }
        inline app::EarlyZDelayedUnhide* create() {
            return il2cpp::create_object<app::EarlyZDelayedUnhide>(get_class());
        }
    } // namespace EarlyZDelayedUnhide
} // namespace app::classes::types
