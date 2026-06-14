#pragma once
#include <Modloader/app/structs/NegativeScaleFixer.h>
#include <Modloader/app/structs/NegativeScaleFixer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegativeScaleFixer {
        inline app::NegativeScaleFixer__Class** type_info() {
            static app::NegativeScaleFixer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NegativeScaleFixer__Class**)(modloader::win::memory::resolve_rva(0x04741C90));
            }
            return cache;
        }
        inline app::NegativeScaleFixer__Class* get_class() {
            return il2cpp::get_class<app::NegativeScaleFixer__Class>(type_info(), "", "NegativeScaleFixer");
        }
        inline app::NegativeScaleFixer* create() {
            return il2cpp::create_object<app::NegativeScaleFixer>(get_class());
        }
    } // namespace NegativeScaleFixer
} // namespace app::classes::types
