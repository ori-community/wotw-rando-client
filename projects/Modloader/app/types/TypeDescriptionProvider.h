#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeDescriptionProvider__Class.h>
#include <Modloader/app/structs/TypeDescriptionProvider.h>

namespace app::classes::types {
    namespace TypeDescriptionProvider {
        inline app::TypeDescriptionProvider__Class** type_info = (app::TypeDescriptionProvider__Class**)(modloader::win::memory::resolve_rva(0x04702DB0));
        inline app::TypeDescriptionProvider__Class* get_class() {
            return il2cpp::get_class<app::TypeDescriptionProvider__Class>(type_info, "System.ComponentModel", "TypeDescriptionProvider");
        }
        inline app::TypeDescriptionProvider* create() {
            return il2cpp::create_object<app::TypeDescriptionProvider>(get_class());
        }
    } // namespace TypeDescriptionProvider
} // namespace app::classes::types
