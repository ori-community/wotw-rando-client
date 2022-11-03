#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryFacetsChecker {
        inline app::BinaryFacetsChecker__Class** type_info = (app::BinaryFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04754900));
        inline app::BinaryFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::BinaryFacetsChecker__Class>(type_info, "System.Xml.Schema", "BinaryFacetsChecker");
        }
        inline app::BinaryFacetsChecker* create() {
            return il2cpp::create_object<app::BinaryFacetsChecker>(get_class());
        }
    } // namespace BinaryFacetsChecker
} // namespace app::classes::types
