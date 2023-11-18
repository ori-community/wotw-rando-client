#pragma once
#include <Modloader/app/structs/EarlyZDelayedUnhide.h>
#include <Modloader/app/structs/EarlyZDelayedUnhide__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyZDelayedUnhide {
        inline app::EarlyZDelayedUnhide__Class** type_info() {
            static app::EarlyZDelayedUnhide__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EarlyZDelayedUnhide__Class**)(modloader::win::memory::resolve_rva(0x0472BF18));
            }
            return cache;
        }
        inline app::EarlyZDelayedUnhide__Class* get_class() {
            return il2cpp::get_class<app::EarlyZDelayedUnhide__Class>(type_info(), "Moon.Rendering", "EarlyZDelayedUnhide");
        }
        inline app::EarlyZDelayedUnhide* create() {
            return il2cpp::create_object<app::EarlyZDelayedUnhide>(get_class());
        }
    } // namespace EarlyZDelayedUnhide
} // namespace app::classes::types
