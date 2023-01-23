#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XAttributeWrapper__Class.h>
#include <Modloader/app/structs/XAttributeWrapper.h>

namespace app::classes::types {
    namespace XAttributeWrapper {
        inline app::XAttributeWrapper__Class** type_info = (app::XAttributeWrapper__Class**)(modloader::win::memory::resolve_rva(0x0473D7B0));
        inline app::XAttributeWrapper__Class* get_class() {
            return il2cpp::get_class<app::XAttributeWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XAttributeWrapper");
        }
        inline app::XAttributeWrapper* create() {
            return il2cpp::create_object<app::XAttributeWrapper>(get_class());
        }
    } // namespace XAttributeWrapper
} // namespace app::classes::types
