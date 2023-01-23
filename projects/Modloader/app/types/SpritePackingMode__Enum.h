#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpritePackingMode__Enum__Class.h>
#include <Modloader/app/structs/SpritePackingMode__Enum.h>

namespace app::classes::types {
    namespace SpritePackingMode__Enum {
        namespace {
            inline app::SpritePackingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SpritePackingMode__Enum__Class** type_info = &type_info_ref;
        inline app::SpritePackingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpritePackingMode__Enum__Class>(type_info, "UnityEngine", "SpritePackingMode");
        }
        inline app::SpritePackingMode__Enum* create() {
            return il2cpp::create_object<app::SpritePackingMode__Enum>(get_class());
        }
    } // namespace SpritePackingMode__Enum
} // namespace app::classes::types
