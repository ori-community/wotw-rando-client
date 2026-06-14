#pragma once
#include <Modloader/app/structs/ReferenceConverter_ReferenceComparer.h>
#include <Modloader/app/structs/ReferenceConverter_ReferenceComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReferenceConverter_ReferenceComparer {
        inline app::ReferenceConverter_ReferenceComparer__Class** type_info() {
            static app::ReferenceConverter_ReferenceComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReferenceConverter_ReferenceComparer__Class**)(modloader::win::memory::resolve_rva(0x0472C268));
            }
            return cache;
        }
        inline app::ReferenceConverter_ReferenceComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::ReferenceConverter_ReferenceComparer__Class>(type_info(), "System.ComponentModel", "ReferenceConverter", "ReferenceComparer");
        }
        inline app::ReferenceConverter_ReferenceComparer* create() {
            return il2cpp::create_object<app::ReferenceConverter_ReferenceComparer>(get_class());
        }
    } // namespace ReferenceConverter_ReferenceComparer
} // namespace app::classes::types
