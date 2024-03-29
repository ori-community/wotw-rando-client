#pragma once
#include <Modloader/app/structs/ISubsystemDescriptorImpl.h>
#include <Modloader/app/structs/ISubsystemDescriptorImpl__Array.h>
#include <Modloader/app/structs/ISubsystemDescriptorImpl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISubsystemDescriptorImpl {
        inline app::ISubsystemDescriptorImpl__Class** type_info() {
            static app::ISubsystemDescriptorImpl__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISubsystemDescriptorImpl__Class**)(modloader::win::memory::resolve_rva(0x04738818));
            }
            return cache;
        }
        inline app::ISubsystemDescriptorImpl__Class* get_class() {
            return il2cpp::get_class<app::ISubsystemDescriptorImpl__Class>(type_info(), "UnityEngine.Experimental", "ISubsystemDescriptorImpl");
        }
        inline app::ISubsystemDescriptorImpl__Array* create_array(int size) {
            return il2cpp::array_new<app::ISubsystemDescriptorImpl__Array>(get_class(), size);
        }
        inline app::ISubsystemDescriptorImpl__Array* create_array(const std::vector<app::ISubsystemDescriptorImpl*>& items) {
            return il2cpp::array_new<app::ISubsystemDescriptorImpl__Array>(get_class(), items);
        }
    } // namespace ISubsystemDescriptorImpl
} // namespace app::classes::types
