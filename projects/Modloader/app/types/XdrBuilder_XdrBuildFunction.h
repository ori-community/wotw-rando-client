#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XdrBuilder_XdrBuildFunction__Class.h>
#include <Modloader/app/structs/XdrBuilder_XdrBuildFunction.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrBuildFunction {
        inline app::XdrBuilder_XdrBuildFunction__Class** type_info = (app::XdrBuilder_XdrBuildFunction__Class**)(modloader::win::memory::resolve_rva(0x04776578));
        inline app::XdrBuilder_XdrBuildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrBuildFunction__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "XdrBuildFunction");
        }
        inline app::XdrBuilder_XdrBuildFunction* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrBuildFunction>(get_class());
        }
    } // namespace XdrBuilder_XdrBuildFunction
} // namespace app::classes::types
