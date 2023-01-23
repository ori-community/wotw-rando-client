#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XContainerWrapper__Class.h>
#include <Modloader/app/structs/XContainerWrapper.h>

namespace app::classes::types {
    namespace XContainerWrapper {
        inline app::XContainerWrapper__Class** type_info = (app::XContainerWrapper__Class**)(modloader::win::memory::resolve_rva(0x04766A48));
        inline app::XContainerWrapper__Class* get_class() {
            return il2cpp::get_class<app::XContainerWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XContainerWrapper");
        }
        inline app::XContainerWrapper* create() {
            return il2cpp::create_object<app::XContainerWrapper>(get_class());
        }
    } // namespace XContainerWrapper
} // namespace app::classes::types
