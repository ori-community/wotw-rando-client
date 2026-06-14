#pragma once
#include <Modloader/app/structs/RecorderInput.h>
#include <Modloader/app/structs/RecorderInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderInput {
        inline app::RecorderInput__Class** type_info() {
            static app::RecorderInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderInput__Class**)(modloader::win::memory::resolve_rva(0x04733918));
            }
            return cache;
        }
        inline app::RecorderInput__Class* get_class() {
            return il2cpp::get_class<app::RecorderInput__Class>(type_info(), "", "RecorderInput");
        }
        inline app::RecorderInput* create() {
            return il2cpp::create_object<app::RecorderInput>(get_class());
        }
    } // namespace RecorderInput
} // namespace app::classes::types
