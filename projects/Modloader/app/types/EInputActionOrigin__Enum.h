#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EInputActionOrigin__Enum {
        namespace {
            inline app::EInputActionOrigin__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EInputActionOrigin__Enum__Class** type_info = &type_info_ref;
        inline app::EInputActionOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::EInputActionOrigin__Enum__Class>(type_info, "Steamworks", "EInputActionOrigin");
        }
        inline app::EInputActionOrigin__Enum* create() {
            return il2cpp::create_object<app::EInputActionOrigin__Enum>(get_class());
        }
        inline app::EInputActionOrigin__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EInputActionOrigin__Enum__Array>(get_class(), size);
        }
        inline app::EInputActionOrigin__Enum__Array* create_array(const std::vector<app::EInputActionOrigin__Enum*>& items) {
            return il2cpp::array_new<app::EInputActionOrigin__Enum__Array>(get_class(), items);
        }
    } // namespace EInputActionOrigin__Enum
} // namespace app::classes::types
