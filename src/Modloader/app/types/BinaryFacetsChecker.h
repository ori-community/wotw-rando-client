#pragma once
#include <Modloader/app/structs/BinaryFacetsChecker.h>
#include <Modloader/app/structs/BinaryFacetsChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryFacetsChecker {
        inline app::BinaryFacetsChecker__Class** type_info() {
            static app::BinaryFacetsChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04754900));
            }
            return cache;
        }
        inline app::BinaryFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::BinaryFacetsChecker__Class>(type_info(), "System.Xml.Schema", "BinaryFacetsChecker");
        }
        inline app::BinaryFacetsChecker* create() {
            return il2cpp::create_object<app::BinaryFacetsChecker>(get_class());
        }
    } // namespace BinaryFacetsChecker
} // namespace app::classes::types
