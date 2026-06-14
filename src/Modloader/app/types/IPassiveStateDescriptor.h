#pragma once
#include <Modloader/app/structs/IPassiveStateDescriptor.h>
#include <Modloader/app/structs/IPassiveStateDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPassiveStateDescriptor {
        inline app::IPassiveStateDescriptor__Class** type_info() {
            static app::IPassiveStateDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPassiveStateDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04786258));
            }
            return cache;
        }
        inline app::IPassiveStateDescriptor__Class* get_class() {
            return il2cpp::get_class<app::IPassiveStateDescriptor__Class>(type_info(), "", "IPassiveStateDescriptor");
        }
    } // namespace IPassiveStateDescriptor
} // namespace app::classes::types
