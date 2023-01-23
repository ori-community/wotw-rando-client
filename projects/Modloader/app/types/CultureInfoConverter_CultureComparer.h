#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CultureInfoConverter_CultureComparer__Class.h>
#include <Modloader/app/structs/CultureInfoConverter_CultureComparer.h>

namespace app::classes::types {
    namespace CultureInfoConverter_CultureComparer {
        inline app::CultureInfoConverter_CultureComparer__Class** type_info = (app::CultureInfoConverter_CultureComparer__Class**)(modloader::win::memory::resolve_rva(0x0473D230));
        inline app::CultureInfoConverter_CultureComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::CultureInfoConverter_CultureComparer__Class>(type_info, "System.ComponentModel", "CultureInfoConverter", "CultureComparer");
        }
        inline app::CultureInfoConverter_CultureComparer* create() {
            return il2cpp::create_object<app::CultureInfoConverter_CultureComparer>(get_class());
        }
    } // namespace CultureInfoConverter_CultureComparer
} // namespace app::classes::types
