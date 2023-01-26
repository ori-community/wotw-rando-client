#pragma once
#include <Modloader/app/structs/IClipGroup.h>
#include <Modloader/app/structs/IClipGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IClipGroup {
        inline app::IClipGroup__Class** type_info() {
            static app::IClipGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IClipGroup__Class**)(modloader::win::memory::resolve_rva(0x04738FC8));
            }
            return cache;
        }
        inline app::IClipGroup__Class* get_class() {
            return il2cpp::get_class<app::IClipGroup__Class>(type_info(), "", "IClipGroup");
        }
    } // namespace IClipGroup
} // namespace app::classes::types
