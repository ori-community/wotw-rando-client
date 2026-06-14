#pragma once
#include <Modloader/app/structs/RenderScope__Enum.h>
#include <Modloader/app/structs/RenderScope__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderScope__Enum {
        inline app::RenderScope__Enum__Class** type_info() {
            static app::RenderScope__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderScope__Enum__Class**)(modloader::win::memory::resolve_rva(0x047665C8));
            }
            return cache;
        }
        inline app::RenderScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderScope__Enum__Class>(type_info(), "Moon.Rendering", "RenderScope");
        }
        inline app::RenderScope__Enum* create() {
            return il2cpp::create_object<app::RenderScope__Enum>(get_class());
        }
    } // namespace RenderScope__Enum
} // namespace app::classes::types
