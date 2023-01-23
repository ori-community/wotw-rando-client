#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlendAnimation2D_InputContainer__Array__Class.h>
#include <Modloader/app/structs/BlendAnimation2D_InputContainer__Array.h>

namespace app::classes::types {
    namespace BlendAnimation2D_InputContainer__Array {
        namespace {
            inline app::BlendAnimation2D_InputContainer__Array__Class* type_info_ref = nullptr;
        }
        inline app::BlendAnimation2D_InputContainer__Array__Class** type_info = &type_info_ref;
        inline app::BlendAnimation2D_InputContainer__Array__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation2D_InputContainer__Array__Class>(type_info, "Moon", "BlendAnimation2D+InputContainer[]");
        }
        inline app::BlendAnimation2D_InputContainer__Array* create() {
            return il2cpp::create_object<app::BlendAnimation2D_InputContainer__Array>(get_class());
        }
    } // namespace BlendAnimation2D_InputContainer__Array
} // namespace app::classes::types
