#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Device {
        namespace {
            inline app::Device__Class* type_info_ref = nullptr;
        }
        inline app::Device__Class** type_info = &type_info_ref;
        inline app::Device__Class* get_class() {
            return il2cpp::get_class<app::Device__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Device");
        }
        inline app::Device* create() {
            return il2cpp::create_object<app::Device>(get_class());
        }
        inline app::Device__Array* create_array(int size) {
            return il2cpp::array_new<app::Device__Array>(get_class(), size);
        }
        inline app::Device__Array* create_array(const std::vector<app::Device*>& items) {
            return il2cpp::array_new<app::Device__Array>(get_class(), items);
        }
    } // namespace Device
} // namespace app::classes::types
