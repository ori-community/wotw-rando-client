#pragma once
#include <Modloader/app/structs/DirectBlendAnimation_Input__Array.h>
#include <Modloader/app/structs/DirectBlendAnimation_Input__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectBlendAnimation_Input__Array {
        inline app::DirectBlendAnimation_Input__Array__Class** type_info() {
            static app::DirectBlendAnimation_Input__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DirectBlendAnimation_Input__Array__Class**)(modloader::win::memory::resolve_rva(0x04752AE0));
            }
            return cache;
        }
        inline app::DirectBlendAnimation_Input__Array__Class* get_class() {
            return il2cpp::get_class<app::DirectBlendAnimation_Input__Array__Class>(type_info(), "Moon", "DirectBlendAnimation+Input[]");
        }
        inline app::DirectBlendAnimation_Input__Array* create() {
            return il2cpp::create_object<app::DirectBlendAnimation_Input__Array>(get_class());
        }
    } // namespace DirectBlendAnimation_Input__Array
} // namespace app::classes::types
