#pragma once
#include <Modloader/app/structs/SeinHealthCurrentProvider.h>
#include <Modloader/app/structs/SeinHealthCurrentProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHealthCurrentProvider {
        inline app::SeinHealthCurrentProvider__Class** type_info() {
            static app::SeinHealthCurrentProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHealthCurrentProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHealthCurrentProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthCurrentProvider__Class>(type_info(), "", "SeinHealthCurrentProvider");
        }
        inline app::SeinHealthCurrentProvider* create() {
            return il2cpp::create_object<app::SeinHealthCurrentProvider>(get_class());
        }
    } // namespace SeinHealthCurrentProvider
} // namespace app::classes::types
