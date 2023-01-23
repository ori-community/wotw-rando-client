#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NonRandomizedStringEqualityComparer__Class.h>
#include <Modloader/app/structs/NonRandomizedStringEqualityComparer.h>

namespace app::classes::types {
    namespace NonRandomizedStringEqualityComparer {
        inline app::NonRandomizedStringEqualityComparer__Class** type_info = (app::NonRandomizedStringEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04770D88));
        inline app::NonRandomizedStringEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::NonRandomizedStringEqualityComparer__Class>(type_info, "System.Collections.Generic", "NonRandomizedStringEqualityComparer");
        }
        inline app::NonRandomizedStringEqualityComparer* create() {
            return il2cpp::create_object<app::NonRandomizedStringEqualityComparer>(get_class());
        }
    } // namespace NonRandomizedStringEqualityComparer
} // namespace app::classes::types
