#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NegativeScaleFixer {
        inline app::NegativeScaleFixer__Class** type_info = (app::NegativeScaleFixer__Class**)(modloader::win::memory::resolve_rva(0x04741C90));
        inline app::NegativeScaleFixer__Class* get_class() {
            return il2cpp::get_class<app::NegativeScaleFixer__Class>(type_info, "", "NegativeScaleFixer");
        }
        inline app::NegativeScaleFixer* create() {
            return il2cpp::create_object<app::NegativeScaleFixer>(get_class());
        }
    } // namespace NegativeScaleFixer
} // namespace app::classes::types
