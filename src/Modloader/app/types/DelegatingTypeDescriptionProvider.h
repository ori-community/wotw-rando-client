#pragma once
#include <Modloader/app/structs/DelegatingTypeDescriptionProvider.h>
#include <Modloader/app/structs/DelegatingTypeDescriptionProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelegatingTypeDescriptionProvider {
        inline app::DelegatingTypeDescriptionProvider__Class** type_info() {
            static app::DelegatingTypeDescriptionProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DelegatingTypeDescriptionProvider__Class**)(modloader::win::memory::resolve_rva(0x04719A48));
            }
            return cache;
        }
        inline app::DelegatingTypeDescriptionProvider__Class* get_class() {
            return il2cpp::get_class<app::DelegatingTypeDescriptionProvider__Class>(type_info(), "System.ComponentModel", "DelegatingTypeDescriptionProvider");
        }
        inline app::DelegatingTypeDescriptionProvider* create() {
            return il2cpp::create_object<app::DelegatingTypeDescriptionProvider>(get_class());
        }
    } // namespace DelegatingTypeDescriptionProvider
} // namespace app::classes::types
