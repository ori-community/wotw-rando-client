#pragma once
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum__Array.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderProperty_Color__Enum {
        inline app::UberShaderProperty_Color__Enum__Class** type_info() {
            static app::UberShaderProperty_Color__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderProperty_Color__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderProperty_Color__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberShaderProperty_Color__Enum__Class>(type_info(), "", "UberShaderProperty_Color");
        }
        inline app::UberShaderProperty_Color__Enum* create() {
            return il2cpp::create_object<app::UberShaderProperty_Color__Enum>(get_class());
        }
        inline app::UberShaderProperty_Color__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderProperty_Color__Enum__Array>(get_class(), size);
        }
        inline app::UberShaderProperty_Color__Enum__Array* create_array(const std::vector<app::UberShaderProperty_Color__Enum*>& items) {
            return il2cpp::array_new<app::UberShaderProperty_Color__Enum__Array>(get_class(), items);
        }
    } // namespace UberShaderProperty_Color__Enum
} // namespace app::classes::types
