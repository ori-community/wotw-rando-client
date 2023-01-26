#pragma once
#include <Modloader/app/structs/DeflateInput_InputState.h>
#include <Modloader/app/structs/DeflateInput_InputState__Boxed.h>
#include <Modloader/app/structs/DeflateInput_InputState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflateInput_InputState {
        inline app::DeflateInput_InputState__Class** type_info() {
            static app::DeflateInput_InputState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeflateInput_InputState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeflateInput_InputState__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateInput_InputState__Class>(type_info(), "Unity.IO.Compression", "DeflateInput", "InputState");
        }
        inline app::DeflateInput_InputState* create() {
            return il2cpp::create_object<app::DeflateInput_InputState>(get_class());
        }
        inline app::DeflateInput_InputState__Boxed* box(app::DeflateInput_InputState value) {
            return il2cpp::box_value<app::DeflateInput_InputState__Boxed>(get_class(), value);
        }
    } // namespace DeflateInput_InputState
} // namespace app::classes::types
