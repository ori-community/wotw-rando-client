#pragma once
#include <Modloader/app/structs/HoloLensFileWriteState.h>
#include <Modloader/app/structs/HoloLensFileWriteState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HoloLensFileWriteState {
        inline app::HoloLensFileWriteState__Class** type_info() {
            static app::HoloLensFileWriteState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HoloLensFileWriteState__Class**)(modloader::win::memory::resolve_rva(0x04735BD8));
            }
            return cache;
        }
        inline app::HoloLensFileWriteState__Class* get_class() {
            return il2cpp::get_class<app::HoloLensFileWriteState__Class>(type_info(), "", "HoloLensFileWriteState");
        }
        inline app::HoloLensFileWriteState* create() {
            return il2cpp::create_object<app::HoloLensFileWriteState>(get_class());
        }
    } // namespace HoloLensFileWriteState
} // namespace app::classes::types
