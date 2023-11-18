#pragma once
#include <Modloader/app/structs/Device.h>
#include <Modloader/app/structs/Device__Array.h>
#include <Modloader/app/structs/Device__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Device {
        inline app::Device__Class** type_info() {
            static app::Device__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Device__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Device__Class* get_class() {
            return il2cpp::get_class<app::Device__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Device");
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
