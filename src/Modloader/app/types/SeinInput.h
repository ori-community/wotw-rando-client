#pragma once
#include <Modloader/app/structs/SeinInput.h>
#include <Modloader/app/structs/SeinInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinInput {
        inline app::SeinInput__Class** type_info() {
            static app::SeinInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinInput__Class**)(modloader::win::memory::resolve_rva(0x04756380));
            }
            return cache;
        }
        inline app::SeinInput__Class* get_class() {
            return il2cpp::get_class<app::SeinInput__Class>(type_info(), "", "SeinInput");
        }
        inline app::SeinInput* create() {
            return il2cpp::create_object<app::SeinInput>(get_class());
        }
    } // namespace SeinInput
} // namespace app::classes::types
