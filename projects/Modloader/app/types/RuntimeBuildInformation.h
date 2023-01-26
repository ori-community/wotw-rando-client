#pragma once
#include <Modloader/app/structs/RuntimeBuildInformation.h>
#include <Modloader/app/structs/RuntimeBuildInformation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeBuildInformation {
        inline app::RuntimeBuildInformation__Class** type_info() {
            static app::RuntimeBuildInformation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeBuildInformation__Class**)(modloader::win::memory::resolve_rva(0x04744420));
            }
            return cache;
        }
        inline app::RuntimeBuildInformation__Class* get_class() {
            return il2cpp::get_class<app::RuntimeBuildInformation__Class>(type_info(), "", "RuntimeBuildInformation");
        }
        inline app::RuntimeBuildInformation* create() {
            return il2cpp::create_object<app::RuntimeBuildInformation>(get_class());
        }
    } // namespace RuntimeBuildInformation
} // namespace app::classes::types
