#pragma once
#include <Modloader/app/structs/ReflectTypeDescriptionProvider.h>
#include <Modloader/app/structs/ReflectTypeDescriptionProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectTypeDescriptionProvider {
        inline app::ReflectTypeDescriptionProvider__Class** type_info() {
            static app::ReflectTypeDescriptionProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectTypeDescriptionProvider__Class**)(modloader::win::memory::resolve_rva(0x04731358));
            }
            return cache;
        }
        inline app::ReflectTypeDescriptionProvider__Class* get_class() {
            return il2cpp::get_class<app::ReflectTypeDescriptionProvider__Class>(type_info(), "System.ComponentModel", "ReflectTypeDescriptionProvider");
        }
        inline app::ReflectTypeDescriptionProvider* create() {
            return il2cpp::create_object<app::ReflectTypeDescriptionProvider>(get_class());
        }
    } // namespace ReflectTypeDescriptionProvider
} // namespace app::classes::types
