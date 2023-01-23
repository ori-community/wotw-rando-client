#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XsdBuilder_BuilderNamespaceManager__Class.h>
#include <Modloader/app/structs/XsdBuilder_BuilderNamespaceManager.h>

namespace app::classes::types {
    namespace XsdBuilder_BuilderNamespaceManager {
        inline app::XsdBuilder_BuilderNamespaceManager__Class** type_info = (app::XsdBuilder_BuilderNamespaceManager__Class**)(modloader::win::memory::resolve_rva(0x04780630));
        inline app::XsdBuilder_BuilderNamespaceManager__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_BuilderNamespaceManager__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "BuilderNamespaceManager");
        }
        inline app::XsdBuilder_BuilderNamespaceManager* create() {
            return il2cpp::create_object<app::XsdBuilder_BuilderNamespaceManager>(get_class());
        }
    } // namespace XsdBuilder_BuilderNamespaceManager
} // namespace app::classes::types
