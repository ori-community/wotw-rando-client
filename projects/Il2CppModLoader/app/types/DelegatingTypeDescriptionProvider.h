#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DelegatingTypeDescriptionProvider {
        inline app::DelegatingTypeDescriptionProvider__Class** type_info = (app::DelegatingTypeDescriptionProvider__Class**)(modloader::win::memory::resolve_rva(0x04719A48));
        inline app::DelegatingTypeDescriptionProvider__Class* get_class() {
            return il2cpp::get_class<app::DelegatingTypeDescriptionProvider__Class>(type_info, "System.ComponentModel", "DelegatingTypeDescriptionProvider");
        }
        inline app::DelegatingTypeDescriptionProvider* create() {
            return il2cpp::create_object<app::DelegatingTypeDescriptionProvider>(get_class());
        }
    } // namespace DelegatingTypeDescriptionProvider
} // namespace app::classes::types
