#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JValue_JValueDynamicProxy__Class.h>
#include <Modloader/app/structs/JValue_JValueDynamicProxy.h>

namespace app::classes::types {
    namespace JValue_JValueDynamicProxy {
        inline app::JValue_JValueDynamicProxy__Class** type_info = (app::JValue_JValueDynamicProxy__Class**)(modloader::win::memory::resolve_rva(0x0478D358));
        inline app::JValue_JValueDynamicProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::JValue_JValueDynamicProxy__Class>(type_info, "Newtonsoft.Json.Linq", "JValue", "JValueDynamicProxy");
        }
        inline app::JValue_JValueDynamicProxy* create() {
            return il2cpp::create_object<app::JValue_JValueDynamicProxy>(get_class());
        }
    } // namespace JValue_JValueDynamicProxy
} // namespace app::classes::types
