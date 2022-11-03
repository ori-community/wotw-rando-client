#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAreaNameFinder {
        inline app::UberShaderAreaNameFinder__Class** type_info = (app::UberShaderAreaNameFinder__Class**)(modloader::win::memory::resolve_rva(0x0471DC80));
        inline app::UberShaderAreaNameFinder__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAreaNameFinder__Class>(type_info, "", "UberShaderAreaNameFinder");
        }
        inline app::UberShaderAreaNameFinder* create() {
            return il2cpp::create_object<app::UberShaderAreaNameFinder>(get_class());
        }
    } // namespace UberShaderAreaNameFinder
} // namespace app::classes::types
