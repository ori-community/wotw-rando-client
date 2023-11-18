#pragma once
#include <Modloader/app/structs/UberShaderBlock_ColliderTypeEnum__Enum.h>
#include <Modloader/app/structs/UberShaderBlock_ColliderTypeEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderBlock_ColliderTypeEnum__Enum {
        inline app::UberShaderBlock_ColliderTypeEnum__Enum__Class** type_info() {
            static app::UberShaderBlock_ColliderTypeEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderBlock_ColliderTypeEnum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderBlock_ColliderTypeEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderBlock_ColliderTypeEnum__Enum__Class>(type_info(), "", "UberShaderBlock", "ColliderTypeEnum");
        }
        inline app::UberShaderBlock_ColliderTypeEnum__Enum* create() {
            return il2cpp::create_object<app::UberShaderBlock_ColliderTypeEnum__Enum>(get_class());
        }
    } // namespace UberShaderBlock_ColliderTypeEnum__Enum
} // namespace app::classes::types
