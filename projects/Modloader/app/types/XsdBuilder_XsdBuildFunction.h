#pragma once
#include <Modloader/app/structs/XsdBuilder_XsdBuildFunction.h>
#include <Modloader/app/structs/XsdBuilder_XsdBuildFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdBuildFunction {
        inline app::XsdBuilder_XsdBuildFunction__Class** type_info() {
            static app::XsdBuilder_XsdBuildFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdBuilder_XsdBuildFunction__Class**)(modloader::win::memory::resolve_rva(0x0471AA40));
            }
            return cache;
        }
        inline app::XsdBuilder_XsdBuildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdBuildFunction__Class>(type_info(), "System.Xml.Schema", "XsdBuilder", "XsdBuildFunction");
        }
        inline app::XsdBuilder_XsdBuildFunction* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdBuildFunction>(get_class());
        }
    } // namespace XsdBuilder_XsdBuildFunction
} // namespace app::classes::types
