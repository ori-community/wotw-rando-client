#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseBootstrapInitializer {
        inline app::WwiseBootstrapInitializer__Class** type_info = (app::WwiseBootstrapInitializer__Class**)(modloader::win::memory::resolve_rva(0x04749E98));
        inline app::WwiseBootstrapInitializer__Class* get_class() {
            return il2cpp::get_class<app::WwiseBootstrapInitializer__Class>(type_info, "", "WwiseBootstrapInitializer");
        }
        inline app::WwiseBootstrapInitializer* create() {
            return il2cpp::create_object<app::WwiseBootstrapInitializer>(get_class());
        }
    } // namespace WwiseBootstrapInitializer
} // namespace app::classes::types
