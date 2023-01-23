#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XsdBuilder_XsdInitFunction__Class.h>
#include <Modloader/app/structs/XsdBuilder_XsdInitFunction.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdInitFunction {
        inline app::XsdBuilder_XsdInitFunction__Class** type_info = (app::XsdBuilder_XsdInitFunction__Class**)(modloader::win::memory::resolve_rva(0x04733CE0));
        inline app::XsdBuilder_XsdInitFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdInitFunction__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "XsdInitFunction");
        }
        inline app::XsdBuilder_XsdInitFunction* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdInitFunction>(get_class());
        }
    } // namespace XsdBuilder_XsdInitFunction
} // namespace app::classes::types
