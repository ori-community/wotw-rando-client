#pragma once
#include <Modloader/app/structs/UberShaderCategory__Enum.h>
#include <Modloader/app/structs/UberShaderCategory__Enum__Array.h>
#include <Modloader/app/structs/UberShaderCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCategory__Enum {
        inline app::UberShaderCategory__Enum__Class** type_info() {
            static app::UberShaderCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategory__Enum__Class>(type_info(), "", "UberShaderCategory");
        }
        inline app::UberShaderCategory__Enum* create() {
            return il2cpp::create_object<app::UberShaderCategory__Enum>(get_class());
        }
        inline app::UberShaderCategory__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderCategory__Enum__Array>(get_class(), size);
        }
        inline app::UberShaderCategory__Enum__Array* create_array(const std::vector<app::UberShaderCategory__Enum*>& items) {
            return il2cpp::array_new<app::UberShaderCategory__Enum__Array>(get_class(), items);
        }
    } // namespace UberShaderCategory__Enum
} // namespace app::classes::types
