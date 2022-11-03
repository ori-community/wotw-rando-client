#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HeaderVariantInfo__Array {
        inline app::HeaderVariantInfo__Array__Class** type_info = (app::HeaderVariantInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04722EA8));
        inline app::HeaderVariantInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::HeaderVariantInfo__Array__Class>(type_info, "System.Net", "HeaderVariantInfo[]");
        }
        inline app::HeaderVariantInfo__Array* create() {
            return il2cpp::create_object<app::HeaderVariantInfo__Array>(get_class());
        }
    } // namespace HeaderVariantInfo__Array
} // namespace app::classes::types
