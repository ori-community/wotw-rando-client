#pragma once
#include <Modloader/app/structs/InstanceDescriptor.h>
#include <Modloader/app/structs/InstanceDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstanceDescriptor {
        inline app::InstanceDescriptor__Class** type_info() {
            static app::InstanceDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstanceDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04710E20));
            }
            return cache;
        }
        inline app::InstanceDescriptor__Class* get_class() {
            return il2cpp::get_class<app::InstanceDescriptor__Class>(type_info(), "System.ComponentModel.Design.Serialization", "InstanceDescriptor");
        }
        inline app::InstanceDescriptor* create() {
            return il2cpp::create_object<app::InstanceDescriptor>(get_class());
        }
    } // namespace InstanceDescriptor
} // namespace app::classes::types
