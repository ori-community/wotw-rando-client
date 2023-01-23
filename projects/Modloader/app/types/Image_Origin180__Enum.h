#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Image_Origin180__Enum__Class.h>
#include <Modloader/app/structs/Image_Origin180__Enum.h>

namespace app::classes::types {
    namespace Image_Origin180__Enum {
        namespace {
            inline app::Image_Origin180__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Image_Origin180__Enum__Class** type_info = &type_info_ref;
        inline app::Image_Origin180__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Image_Origin180__Enum__Class>(type_info, "UnityEngine.UI", "Image", "Origin180");
        }
        inline app::Image_Origin180__Enum* create() {
            return il2cpp::create_object<app::Image_Origin180__Enum>(get_class());
        }
    } // namespace Image_Origin180__Enum
} // namespace app::classes::types
